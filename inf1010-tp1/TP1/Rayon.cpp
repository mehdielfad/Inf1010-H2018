#include "Rayon.h"

Rayon::Rayon(): categorie_("inconnu"), tousProduits_(nullptr), capaciteProduits_ (0), nombreProduits_(0) {}

Rayon::Rayon(string cat): categorie_(cat), tousProduits_(nullptr), capaciteProduits_(0), nombreProduits_(0) {}

Rayon::~Rayon() {
	//
};

string Rayon::obtenirCategorie() const {
	return categorie_;
}

Produit ** Rayon::obtenirTousProduits() const {
	return tousProduits_;
}

int Rayon::obtenirCapaciteProduits() const {
	return capaciteProduits_;
}

int Rayon::obtenirNombreProduits () const {
	return nombreProduits_;
}

void Rayon::modifierCategorie(string cat) {
	categorie_ = cat;
}

void Rayon::ajouterProduit(Produit * produit) {
	if (tousProduits_ == nullptr) {
		tousProduits_ = new Produit*[5];
		capaciteProduits_ = 5;
	}
	else if (capaciteProduits_ == nombreProduits_) {
		Produit** temp = new Produit*[nombreProduits_ + 5];
		for (unsigned int i = 0 ; i < nombreProduits_  ; i++){
			temp[i] = tousProduits_[i];
		}
		for (unsigned int i = nombreProduits_ ; i < nombreProduits_ + 5; i++){
			temp[i] = nullptr;
		}
		tousProduits_ = temp;
		capaciteProduits_ += 5;
		for (unsigned int i = 0 ; i < capaciteProduits_; i++){
			delete temp[i] ;
		}
		delete [] temp;
		temp = nullptr;
	
		
		
		
		
		
		
		
		/*Produit ** nouveauTousProduit = new Produit*[capaciteProduits_ + 5];
		for (int i = 0; i < capaciteProduits_; i++) {
			nouveauTousProduit[i] = tousProduits_[i];
		}
		tousProduits_ = nouveauTousProduit;
		delete [] nouveauTousProduit;
		delete nouveauTousProduit;
		nouveauTousProduit = nullptr;
		capaciteProduits_ += 5;*/
	}
	tousProduits_[nombreProduits_] = produit;
    nombreProduits_++;
}

void Rayon::afficher() const {
	cout << "Rayon - Categorie : " << obtenirCategorie() << endl;
	cout << "Rayon - Produits : " << endl << endl;
	for (int i = 0; i < nombreProduits_; i++) {
		tousProduits_[i]->afficher();
	}
    cout << endl;
	cout << "Rayon - Capacité : " << obtenirCapaciteProduits() << endl;
	cout << "Rayon - Nombre de produits : " << obtenirNombreProduits() << endl;
}
