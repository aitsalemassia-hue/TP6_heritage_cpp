
#ifndef EXERCICE1_ETUDIANT_H_
#define EXERCICE1_ETUDIANT_H_
#include"Personne.h"

class Etudiant : public  Personne{
private:
	std::string niveau;
public:
	Etudiant(std::string nom,int age ,std::string niveau);
	void afficherEtudiant();
	virtual ~Etudiant();
};

#endif /* EXERCICE1_ETUDIANT_H_ */
