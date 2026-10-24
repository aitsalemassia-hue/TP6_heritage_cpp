#include<string>
#include<iostream>
#include "Personne.h"

Personne::Personne(std::string nom,int age):nom(nom),age(age){
}

void Personne ::afficher(){
	std::cout << "nom : "<<nom<<" age :"<<age <<std::endl;
}
Personne::~Personne() {
	// TODO Auto-generated destructor stub
}

