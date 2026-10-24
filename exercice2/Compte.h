
#ifndef EXERCICE2_COMPTE_H_
#define EXERCICE2_COMPTE_H_
#include<iostream>
class Compte {
protected:
	std::string numero;
	double solde;
public:

	Compte(std::string numero,double solde);
	void deposer(float montant);
	void retirer(float montant);
	double getSolde();
	virtual ~Compte();
};



#endif /* EXERCICE2_COMPTE_H_ */
