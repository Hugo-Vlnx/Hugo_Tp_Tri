#include <stdio.h>
#include "exo1.h"
#include <stdlib.h>

int main() {
	int taille = 3;
	Meds ** med=creerMeds(taille);
	for (int i = 0; i < taille; i++) {
		med[i] = definirMed();
	}
	TriABulle(med, taille);
	return 0;

}