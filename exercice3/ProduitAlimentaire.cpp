
#include "ProduitAlimentaire.h"
#include<iostream>
#include<string>

ProduitAlimentaire::ProduitAlimentaire(std::string nom,double prix,std::string  dateExpiration):Produit(nom,prix),dateExpiration(dateExpiration){

}
void ProduitAlimentaire::afficherInfoAliment(){
	afficherInfo();
	std::cout<<"date d'expiration :" <<dateExpiration <<std::endl;
}

ProduitAlimentaire::~ProduitAlimentaire() {
	// TODO Auto-generated destructor stub
}

