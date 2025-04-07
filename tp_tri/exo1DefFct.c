#include <stdio.h>
#include "exo1.h"
#include <stdlib.h>

Meds** creerMeds( int taille) {
    Meds** med = malloc(taille*sizeof(Meds*));
    for (int i = 0; i < taille; i++) {
        med[i] = NULL;

    }
    return med;
}

Meds* definirMed() {

    Meds* med = malloc(sizeof(Meds));

    //med->prix = 0;
    printf("\n Nouveau  medicament ");
    printf("entrez la date de péremption AAAAMM :");
    scanf_s("%d", &med->datePer);
    getchar;
    printf("\nentrez la date de production AAAAMM : ");
    scanf_s("\n%d",    &med->dateFab);
    getchar;
    printf("\nentrez le prix : ");
    scanf_s("\n%f", &(med->prix));
    getchar;
    printf("\nentrez le code medicament : ");
    scanf_s("\n%20s", &med->code, 20);
    getchar;
    printf("\nentrez le nom medicament : ");
    scanf_s("\n%50s", &med->nom, 50);
    getchar;
    printf("\ncombien vendu : ");
    scanf_s("\n%d", &med->vendu);
    getchar;
    printf("\ncombien en stock : ");
    scanf_s("\n%d", &med->stock);
    getchar;
    return med;


}

void swap(Meds* medx, Meds* medy) {
    Meds temp = *medx;
    *medx = *medy;
    *medy = temp;
}


void afficherTab(Meds** med, int taille) {
    int i;
    for (i = 0; i < taille; i++)
        printf("\n%s - fabriquer le %d, expire le %d - code %s - prix : %.2f ", med[i]->nom, med[i]->dateFab, med[i]->datePer, med[i]->code, med[i]->prix);
    printf("\n");
}


//void TriABulle(Meds** med, int taille) {
//    if (!med) {
//        return;
//    }
//    for (int a = 0; a < taille; a++) {
//        if (!med[a]) {
//            return;
//        }
//    }
//    int i, j;
//    int swapped;
//   
//    for (i = 0; i < taille - 1; i++) {
//        swapped = 0;
//        for (j = 0; j < taille - i - 1; j++) {
//            if (med[j]->datePer > med[j + 1]->datePer) {
//                swap(med[j], med[j + 1]);
//                swapped = 1;
//            }
//            afficherTab(med, taille);
//        }
//        printf("\n");
//      
//        if (swapped == 0)
//            break;
//    }
//}

void TriABulleNom(Meds** med, int taille) {
    if (!med) {
        return;
    }
    for (int a = 0; a < taille; a++) {
        if (!med[a]) {
            return;
        }
    }
    int i, j;
    int swapped;

    for (i = 0; i < taille - 1; i++) {
        swapped = 0;
        for (j = 0; j < taille - i - 1; j++) {
            if (strcmp(med[j]->datePer, med[j + 1]->datePer)>0) {
                swap(med[j], med[j + 1]);
                swapped = 1;
            }
            afficherTab(med, taille);
        }
        printf("\n");

        if (swapped == 0)
            break;
    }
}

void recherche_dicho(int debut, int fin, Meds**med) {
    if (debut > fin) {
        return;
    }
    int  trouve = 0;
    printf("\nquel med cherchez- vous ?");
    int i = 0;
    int mil;
    char valeur[50];
    scanf_s("%s", valeur,50);
    getchar();
    while (1) {
            mil = (debut+fin)/2;
            if (strcmp(valeur, med[i]->nom) == 0)
            {
                trouve = 1;
               
            }
            else if(strcmp(valeur, med[i]->nom) > 0) {
                debut = mil + 1;
            }
            else {
                fin = mil - 1;
            }
    }
    if (trouve == 1) {
        printf("\nle medicament %s est au rang %d ", valeur, mil);
    }
}

