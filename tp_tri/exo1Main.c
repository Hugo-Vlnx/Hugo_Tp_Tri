#include <stdio.h>
#include "exo1.h"
#include <stdlib.h>

int main() {
	int taille = 3;
	Meds ** med=creerMeds(taille);
	/*for (int i = 0; i < taille; i++) {
		med[i] = definirMed();
	}*/
    med[0] = malloc(sizeof(Meds));
    strcpy_s(med[1]->nom, 50, "IDoliprane");
    strcpy_s(med[1]->code, 20, "DOL123");
    med[0]->dateFab = 202301;
    med[0]->datePer = 202501;
    med[0]->prix = 2.99;
    med[0]->vendu = 150;
    med[0]->stock = 50;

    // Médicament 2
    med[1] = malloc(sizeof(Meds));
    strcpy_s(med[1]->nom, 50, "Ibuprofen");
    strcpy_s(med[1]->code, 20, "IBU456");
    med[1]->dateFab = 202211;
    med[1]->datePer = 202411;
    med[1]->prix = 3.49;
    med[1]->vendu = 200;
    med[1]->stock = 30;

    // Médicament 3
    med[2] = malloc(sizeof(Meds));
    strcpy_s(med[2]->nom, 50, "Spasfon");
    strcpy_s(med[2]->code, 20, "SPA789");
 
    med[2]->dateFab = 202202;
    med[2]->datePer = 202502;
    med[2]->prix = 4.20;
    med[2]->vendu = 100;
    med[2]->stock = 70;
    
	TriABulle(med, taille);
    int debut = 0;
    int fin = taille - 1;
     
    /*recherche_dicho(debut, fin, med);*/
	return 0;

}