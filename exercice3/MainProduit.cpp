#include"ProduitAlimentaire.h"
#include"ProduitElectronique.h"


int main(){
	ProduitAlimentaire ProduitA("Lait",5,"12/12/2026");
	ProduitAlimentaire ProduitA2("chocoulat",20,"18/03/2027");
	ProduitElectronique ProduitE("tablet",2000,1);
	ProduitElectronique ProduitE2("pc portable",7000,2);


	//produits alimentaires
	std::cout << "les produits alimentaires"<<std::endl;
	ProduitA.afficherInfoAliment();
	ProduitA2.afficherInfoAliment();
	//produits electroniques
	std::cout << "les produits electroniques"<<std::endl;
	ProduitE.afficherInfoElectro();
	ProduitE2.afficherInfoElectro();
}
