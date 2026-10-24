

#include "Permanent.h"
#include<iostream>

Permanent::Permanent(std::string nom,int id,float salaireDeBase,float primAnnuelle):Employe(nom,id,salaireDeBase),primeAnnuelle(primeAnnuelle) {
}

void Permanent::afficherInfosPermanent(){
	afficherInfos();
	std::cout<<" prime  annuelle :" << primeAnnuelle <<std::endl;
}
Permanent::~Permanent() {
	// TODO Auto-generated destructor stub
}

