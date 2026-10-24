#include <iostream>
#include "Employe.h"
#include "Permanent.h"
#include "Contractuel.h"

int main() {
	const int N = 3;

	// Tableau dynamique de pointeurs vers Employe
	Employe** employes = new Employe*[N];

	employes[0] = new Permanent("Ahmed", 1, 8000, 12000);
	employes[1] = new Contractuel("Sara", 2, 0, 12, 50);
	employes[2] = new Permanent("Youssef", 3, 9000, 15000);


	for (int i = 0; i <N; i++) {
		employes[i]->afficherInfos();

	}


	Contractuel* c = dynamic_cast<Contractuel*>(employes[1]);
	if (c != NULL) {
		std::cout << "Salaire mensuel de Sara : "
		          << c->calculerSalaireMensuel(120) << std::endl;
	}



	return 0;
}


