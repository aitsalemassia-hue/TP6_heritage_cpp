
#include "Compte.h"

Compte::Compte(std::string numero,double solde):numero(numero),solde(solde) {

}

void Compte::deposer(float montant){
	solde+=montant;

}

void Compte::retirer(float montant){
	solde-=montant;

}

double Compte::getSolde(){
	return solde;
}

Compte::~Compte() {
	// TODO Auto-generated destructor stub
}

