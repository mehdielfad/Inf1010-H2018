#include "Panier.h"

Panier::Panier(int capacite) {
	capaciteContenu_ = capacite;
	contenuPanier_ = new Produit*[capacite];
	for (unsigned int i = 0 ; i < capacite ; i++){
		contenuPanier_[i] = nullptr;
	}
	nombreContenu_ = 0;
	totalAPayer_ = 0;
}

Panier::~Panier(){
	for (unsigned int i = 0 ; i < capaciteContenu_ ; i++){
		delete contenuPanier_[i];
	}
	delete [] contenuPanier_;
	contenuPanier_ = nullptr;
}

Produit ** Panier::obtenirContenuPanier() const {
	return contenuPanier_;
}

int Panier::obtenirNombreContenu() const {
	return nombreContenu_;
}

double Panier::obtenirTotalApayer() const {
	return totalAPayer_;
}

void Panier::ajouter(Produit * prod) {
	if (capaciteContenu_ == nombreContenu_) {
		capaciteContenu_ *= 2;
	}
	contenuPanier_[nombreContenu_] = prod;
    nombreContenu_++;
	totalAPayer_ += prod->obtenirPrix();
}

void Panier::livrer() {
	for (int i = 0; i < nombreContenu_; i++) {
		contenuPanier_[i] = 0;
	}
	nombreContenu_ = 0;
	totalAPayer_ = 0;
}

void Panier::afficher() const {
    cout << endl;
	for (int i = 0; i < nombreContenu_; i++) {
		cout << i + 1 << ") ";
		contenuPanier_[i]->afficher();
	}
    cout << endl;
    cout << "Panier - Total a payer : " << obtenirTotalApayer() << endl;
}
