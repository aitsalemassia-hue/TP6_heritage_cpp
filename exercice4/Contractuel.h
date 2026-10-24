
#ifndef EXERCICE4_CONTRACTUEL_H_
#define EXERCICE4_CONTRACTUEL_H_
#include"Employe.h"

class Contractuel:public Employe {
private:
	int dureeContrat;
	float tauxHorair;

public:
	Contractuel(std::string nom,int id,float salaireDeBase,int dureeContrat,float tauxHorair);
	float calculerSalaireMensuel(int heures);
	virtual ~Contractuel();
};

#endif /* EXERCICE4_CONTRACTUEL_H_ */
