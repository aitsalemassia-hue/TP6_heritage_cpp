

#include "Contractuel.h"

Contractuel::Contractuel(std::string nom,int id,float salaireDeBase,int t,float TH):
Employe(nom,id,salaireDeBase),dureeContrat(t),tauxHorair(TH) {
}

float Contractuel::calculerSalaireMensuel(int heures){
	return tauxHorair*heures;
}
Contractuel::~Contractuel() {

}

