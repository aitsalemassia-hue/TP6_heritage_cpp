
#ifndef EXERCICE3_PRODUITELECTRONIQUE_H_
#define EXERCICE3_PRODUITELECTRONIQUE_H_
#include"Produit.h"
class ProduitElectronique:public Produit {
private :
	int garantie;
public:
	ProduitElectronique(std::string nom,double prix,int garantie);
	void afficherInfoElectro();
	virtual ~ProduitElectronique();
};

#endif /* EXERCICE3_PRODUITELECTRONIQUE_H_ */
