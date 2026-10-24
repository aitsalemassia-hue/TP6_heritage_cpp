
#ifndef EXERCICE1_PERSONNE_H_
#define EXERCICE1_PERSONNE_H_
#include<iostream>
#include <string>
class Personne {
protected:
	std::string nom;
	int age;
public:
	Personne(std::string nom,int age);
	void afficher();
	virtual ~Personne();
};

#endif /* EXERCICE1_PERSONNE_H_ */
