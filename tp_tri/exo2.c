#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exo2.h"



int main() {
    int nb_etud = 5;
    Etudiant** tous = creerTab(nb_etud);

    tous[0] = creerEtudiant("Sabadie", "Aylia", 1, 14.5);
    tous[1] = creerEtudiant("Souchet", "Raphael", 2, 16.0);
    tous[2] = creerEtudiant("Hurvois", "Martin", 3, 12.0);
    tous[3] = creerEtudiant("Vialaneix", "Hugo", 4, 18.5);
    tous[4] = creerEtudiant("xxx", "yyy", 5, 15.0);

    printf("Tableau avant tri:");
    afficherEtudiants(tous, nb_etud);

    quicksort(tous, 0, nb_etud - 1);

    printf("\nTableau apres tri :");
    afficherEtudiants(tous, nb_etud);

    freeEd(tous, nb_etud);

    return 0;
}