
#ifndef EXERCICE4_PERMANENT_H_
#define EXERCICE4_PERMANENT_H_
#include"Employe.h"
class Permanent :public Employe{
private :
	float primeAnnuelle;
public:
	Permanent(std::string nom,int id,float salaireDeBase,float primeAnnuelle);
	void afficherInfosPermanent();
	virtual ~Permanent();
};

#endif /* EXERCICE4_PERMANENT_H_ */
