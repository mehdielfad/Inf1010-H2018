/**************************************************
* Titre: Travail pratique #1 - Main.cpp
* Date: 20 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA
**************************************************/

#include "Produit.h"
#include "Rayon.h"
#include "Client.h"
#include "Panier.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	// C'est à vous de voir si vous devez allouer dynamiquement ou non les élèments

	// 1-  Creez 15 objets du classe produit

	Produit* produit1 = new Produit;
	Produit* produit2 = new Produit;
	Produit* produit3 = new Produit;
	Produit* produit4 = new Produit;
	Produit* produit5 = new Produit;
	Produit* produit6 = new Produit;
	Produit* produit7 = new Produit;
	Produit* produit8 = new Produit;
	Produit* produit9  = new Produit;
	Produit* produit10 = new Produit;
	Produit* produit11 = new Produit;
	Produit* produit12 = new Produit;
	Produit* produit13 = new Produit;
	Produit* produit14 = new Produit;
	Produit* produit15 = new Produit;

	// 2-  Modifiez le nom, la référence, le prix de  troisieme objet Produit créé
	//     afficher les attributs de cet objet Produit

	produit3->modifierNom("Ananas");
	produit3->modifierReference(1782246);
	produit3->modifierPrix(1);
	produit3->afficher();

	// 3-  Creez un objet du classe rayon à l'aide du constructeur par défaut
	Rayon rayon = Rayon("haha");

	// 4-  Modifiez la catégorie  du rayon

	rayon.modifierCategorie("Dildo");
   
    // 5-  Ajouter 6 produits de votre choix dans le rayon créé

	rayon.ajouterProduit(produit1);
	rayon.ajouterProduit(produit2);
	rayon.ajouterProduit(produit3);
	rayon.ajouterProduit(produit4);
	rayon.ajouterProduit(produit5);
	rayon.ajouterProduit(produit6);

    // 6-  Afficher le contenu du rayon
   
	rayon.afficher();
  
	// 7-  Creez un objet de classe client à l'aide du constructeur
   
	Client client = Client("Paul", "Paul", 666, "lol", 000101);

	// 8-  Afficher l'etat des attributs du client
	cout << "Le nom du client est : " << client.obtenirNom() << endl;
	cout << "Le prenom du client est : " << client.obtenirPrenom() << endl;
	cout << "L'identifiant du client est : " << client.obtenirIdentifiant() << endl;
	cout << "Le code postal du client est : " << client.obtenirCodePostal() << endl;
	cout << "La date de naissance du client est : " << client.obtenirDateNaissance() << endl;

	// 9-  Le client achete 9 produits
   
	client.acheter(produit3);
	client.acheter(produit3);
	client.acheter(produit3);
	client.acheter(produit3);
	client.acheter(produit3);
	client.acheter(produit3);
	client.acheter(produit3);
	client.acheter(produit3);
	client.acheter(produit3);

	// 10- Afficher le contenu du panier du client

	client.afficherPanier();

    // 11- Livrer le panier du client
   
	client.livrerPanier();
    
	// 12- Afficher le contenu du panier du client

	client.afficherPanier();
    
	// 13- Terminer le programme correctement
    
	// TODO: checker si un delete[] sur un tableau de pointeur supprimer aussi les variables pointées
	
    
    return 0;
}
