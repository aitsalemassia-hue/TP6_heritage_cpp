/*
 * CompteEpargne.cpp
 *
 *  Created on: 24 oct. 2026
 *      Author: Admin
 */

#include "CompteEpargne.h"

CompteEpargne::CompteEpargne(std::string numero,double solde,double tauxInteret):Compte(numero,solde),tauxInteret(tauxInteret) {

}

double CompteEpargne::calculerInteret(double tauxInteret){
	double Interet=solde* (tauxInteret/100);
	return Interet ;
}



CompteEpargne::~CompteEpargne() {
	// TODO Auto-generated destructor stub
}

