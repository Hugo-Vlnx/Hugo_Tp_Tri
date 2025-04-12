#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exo3.h"




int main() {

    int tab1[] = { 1, 3, 5, 10 };
    int tab2[] = { 2, 7, 9, 11, 12 };

    int taille1 = sizeof(tab1) / sizeof(tab1[0]);
    int taille2 = sizeof(tab2) / sizeof(tab2[0]);
    int taille3;


    int* tab3 = fusionner(tab1, taille1, tab2, taille2, &taille3);
    if (tab3 == NULL) {
        return NULL;
    }


    printf("Tableau 1: ");
    afficher_tableau(tab1, taille1);

    printf("Tableau 2: ");
    afficher_tableau(tab2, taille2);

    printf("Tableau fusionné : ");
    afficher_tableau(tab3, taille3);

    free(tab3);

    return 0;
}