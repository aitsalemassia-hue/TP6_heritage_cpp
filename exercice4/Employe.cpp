
#include "Employe.h"
#include <iostream>

Employe::Employe(std::string nom,int id,float salaireDeBase):nom(nom),id(id),salaireDeBase(salaireDeBase) {

}

void Employe::afficherInfos(){
	std::cout<<"id :"<<id <<"le nom :" <<nom
			<<"salaire de base :"<<salaireDeBase <<std::endl;
}

Employe::~Employe() {
	// TODO Auto-generated destructor stub
}

