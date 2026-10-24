
#include "Etudiant.h"

Etudiant::Etudiant(std::string nom,int age ,std::string niveau):Personne(nom,age),niveau(niveau){
}

void Etudiant::afficherEtudiant(){
	afficher();
	std::cout << " niveau  : " << niveau << std::endl;
}

Etudiant::~Etudiant() {
	// TODO Auto-generated destructor stub
}

