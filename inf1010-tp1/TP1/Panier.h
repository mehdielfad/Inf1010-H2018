
//  panier.h
//  Created by Martine Bellaiche on 18-01-22.
//  Copyright © 2018 Martine Bellaiche. All rights reserved.
//

#ifndef PANIER_H
#define PANIER_H

#include <string>
#include "Produit.h"

class Panier
{
public:
    Panier (int capacite);
    ~Panier ();
    
    // Methodes d'accès
    Produit **  obtenirContenuPanier() const;
    int obtenirNombreContenu() const;
    double obtenirTotalApayer() const;
    
    // Méthodes de modification
    
    // Autres méthodes
    void ajouter ( Produit * prod);
    void livrer();
    void afficher() const;

private:
    
    Produit ** contenuPanier_;
    int  nombreContenu_;
    int capaciteContenu_;
    double totalAPayer_;
};

#endif

