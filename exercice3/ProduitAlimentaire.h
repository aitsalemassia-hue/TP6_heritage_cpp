
#ifndef EXERCICE3_PRODUITALIMENTAIRE_H_
#define EXERCICE3_PRODUITALIMENTAIRE_H_
#include"Produit.h"
class ProduitAlimentaire :public Produit {
private:
	std::string dateExpiration;
public:
	ProduitAlimentaire(std::string nom,double prix,std::string  dateExpiration);
	void afficherInfoAliment();
	virtual ~ProduitAlimentaire();
};

#endif /* EXERCICE3_PRODUITALIMENTAIRE_H_ */
