#include"CompteEpargne.h"


int main(){

	CompteEpargne compte1("A67548",4000,10);
	CompteEpargne compte2("ET5468",6000,15);
	CompteEpargne compte3("SF12346",7000,5);

	//compte 1
	std::cout<<"le solde  du compte 1  : "<<compte1.getSolde()<<std::endl;
	compte1.deposer(300);
	std::cout<<"le solde  du compte 1 apres depot : "<<compte1.getSolde()<<std::endl;
	compte1.retirer(700);
	std::cout<<"le solde  du compte 1 apres retrait: "<<compte1.getSolde()<<std::endl;


	std::cout << "Interets du compte 1 : "
	              << compte1.calculerInteret(10) << std::endl;

	// Compte 2
	    std::cout << "\nSolde du compte 2 : "
	              << compte2.getSolde()<< std::endl;

	    std::cout << "Interets du compte 2 : "
	              << compte2.calculerInteret(15) << std::endl;

	    // Compte 3
	    std::cout << "\nSolde du compte 3 : "
	              << compte3.getSolde() << std::endl;

	    std::cout << "Interets du compte 3 : "
	              << compte3.calculerInteret(5) << std::endl;





}




