
#ifndef EXERCICE3_PRODUIT_H_
#define EXERCICE3_PRODUIT_H_
#include<iostream>
#include <string>
class Produit {
protected :
	std::string nom;
	double prix;
public:
	Produit(std::string nom,double prix);
	void afficherInfo();
	virtual ~Produit();
};

#endif /* EXERCICE3_PRODUIT_H_ */
