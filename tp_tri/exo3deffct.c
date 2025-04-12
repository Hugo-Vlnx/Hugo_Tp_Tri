#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exo3.h"



int* fusionner(int* tab1, int taille1,int* tab2, int taille2, int* taille3) {
   
    *taille3 = taille1 + taille2;
    int* tab3 = malloc(*taille3 * sizeof(int));
    if (tab3 == NULL) {
        return NULL;
    }

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < taille1 && j < taille2) {
        if (tab1[i] <= tab2[j]) {
            tab3[k] = tab1[i];               
            i++;
        }
        else {
            tab3[k] = tab2[j];
            j++;
        }
        k++;
    }

    while (i < taille1) {
        tab3[k] = tab1[i];
        k++;
        i++;
    }

    while (j < taille2) {
        tab3[k] = tab2[j];
        k++;
        j++;
    }

    return tab3;
}

void afficher_tableau(const int* tab, int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}