#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exo1.h"

int main() {
    int taille = 3;
    Meds** med = creerMeds(taille);

    // Médicament 1
    med[0] = malloc(sizeof(Meds));
    strcpy_s(med[0]->nom,50, "Doliprane");
    strcpy_s(med[0]->code,20, "DOL123");
    med[0]->dateFab = 202301;
    med[0]->datePer = 202501;
    med[0]->prix = 2.99;
    med[0]->vendu = 100;
    med[0]->stock = 50;

    // Médicament 2
    med[1] = malloc(sizeof(Meds));
    strcpy_s(med[1]->nom,50, "Ibuprofen");
    strcpy_s(med[1]->code,20, "IBU456");
    med[1]->dateFab = 202201;
    med[1]->datePer = 202401;
    med[1]->prix = 3.49;
    med[1]->vendu = 200;
    med[1]->stock = 30;

    // Médicament 3
    med[2] = malloc(sizeof(Meds));
    strcpy_s(med[2]->nom,50, "Spasfon");
    strcpy_s(med[2]->code,20, "SPA789");
    med[2]->dateFab = 202102;
    med[2]->datePer = 202502;
    med[2]->prix = 4.20;
    med[2]->vendu = 75;
    med[2]->stock = 60;

  
    printf("\n Médicaments avant tri :\n");
    afficherTab(med, taille);

  
    TriABulle(med, taille);

    TriABulleNom(med, taille);
    int debut = 0;
    int fin = 3;
    recherche_dicho(debut, fin, med);
    TriABullePrix(med, taille);

  

    return 0;
}
