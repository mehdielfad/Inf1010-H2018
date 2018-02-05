#include "Client.h"

Client::Client(string nom, string prenom, int identifiant, string codePostal, long dateNaissance){
	nom_ = nom;
	prenom_ = prenom;
	identifiant_ = identifiant;
	codePostal_ = codePostal;
	dateNaissance_ = dateNaissance;
	monPanier_ = nullptr;
}

Client::~Client(){
	delete monPanier_;
	monPanier_ = nullptr;
}

string Client::obtenirNom() const {
	return nom_;
}

string Client::obtenirPrenom() const {
	return prenom_;
}

int Client::obtenirIdentifiant() const {
	return identifiant_;
}

string Client::obtenirCodePostal() const {
	return codePostal_;
}

long Client::obtenirDateNaissance() const {
	return dateNaissance_;
}

void Client::modifierNom(string nom){
	nom_ = nom;
}

void Client::modifierPrenom(string prenom){
	prenom_ = prenom;
}

void Client::modifierIdentifiant(int identifiant){
	identifiant_ = identifiant;
}

void Client::modifierCodePostal(string codePostal){
	codePostal_ = codePostal;
}

void Client::modifierDateNaissance(long dateNaissance){
	dateNaissance_ = dateNaissance;
}

void Client::acheter(Produit * prod){
	if (monPanier_ == nullptr) {
		monPanier_ = new Panier(4);
	}
	monPanier_->ajouter(prod);
}

void Client::afficherPanier(){
	if (monPanier_->obtenirNombreContenu() != 0) {
		monPanier_->afficher();
	}
}

void Client::livrerPanier(){
	monPanier_->livrer();
	delete monPanier_;
}




