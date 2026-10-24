
#ifndef EXERCICE2_COMPTEEPARGNE_H_
#define EXERCICE2_COMPTEEPARGNE_H_
#include"Compte.h"

class CompteEpargne :public Compte {
double tauxInteret;

public:
	CompteEpargne(std::string numero,double solde,double tauxInteret);
	double calculerInteret(double tauxInteret);
	virtual ~CompteEpargne();
};

#endif /* EXERCICE2_COMPTEEPARGNE_H_ */
