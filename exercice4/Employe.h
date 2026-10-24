
#ifndef EXERCICE4_EMPLOYE_H_
#define EXERCICE4_EMPLOYE_H_
#include<iostream>
class Employe {
protected:
	std::string nom;
	int id;
	float salaireDeBase;

public:
	Employe(std::string nom,int id,float salaireDeBase);
	void afficherInfos();
	virtual ~Employe();
};

#endif /* EXERCICE4_EMPLOYE_H_ */
