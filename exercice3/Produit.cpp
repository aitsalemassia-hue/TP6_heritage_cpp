
#include "Produit.h"
#include <iostream>
Produit::Produit(std::string nom,double prix):nom(nom),prix(prix) {
}
void Produit::afficherInfo(){
	std::cout<<"le nom du produit :"<< nom<<std::endl;
	std::cout<<"le prix  :"<< prix<<std::endl;
}
Produit::~Produit() {

}

