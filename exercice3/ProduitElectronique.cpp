

#include "ProduitElectronique.h"
#include<iostream>

ProduitElectronique::ProduitElectronique(std::string nom,double prix,int garantie):Produit(nom,prix),garantie(garantie){
	// TODO Auto-generated constructor stub

}
void ProduitElectronique::afficherInfoElectro(){
	afficherInfo();
	std::cout<<"garantie  :" <<garantie <<"ans" <<std::endl;
}

ProduitElectronique::~ProduitElectronique() {
	// TODO Auto-generated destructor stub
}

