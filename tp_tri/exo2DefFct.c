#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exo2.h"



void swap2(Etudiant* a, Etudiant* b) {
    Etudiant temp = *a;
    *a = *b;
    *b = temp;
}

Etudiant** creerTab(int n) {
    Etudiant** tous = malloc(n * sizeof(Etudiant*));
    if (tous == NULL) {
        return NULL;
    }
    return tous;
}

Etudiant* creerEtudiant(char nom[50], char prenom[50], int matricule, float moyenne) {
    Etudiant* e = malloc(sizeof(Etudiant));
    if (e == NULL) {
        return NULL;
    }
    strcpy_s(e->nom, 50, nom);
    strcpy_s(e->prenom, 50, prenom);
    e->matricule = matricule;
    e->moyenne = moyenne;
    return e;
}

int partition(Etudiant** tous, int low, int high) {
    float pivot = tous[high]->moyenne;
    int i = (low - 1);

    for (int j = low; j < high; j++) {
        if (tous[j]->moyenne > pivot) {
            i++;
            swap2(tous[i], tous[j]);
        }
    }
    swap2(tous[i + 1], tous[high]);
    return (i + 1);
}

void quicksort(Etudiant** tous, int low, int high) {
    if (low < high) {
        int a = partition(tous, low, high);
        quicksort(tous, low, a - 1);
        quicksort(tous, a + 1, high);
    }
}

void afficherEtudiants(Etudiant** tous, int taille) {
    printf("\nListe des etudiants :\n");
    for (int i = 0; i < taille; i++) {
        printf(" %s  %s : matricule %d %.2f \n", tous[i]->nom, tous[i]->prenom, tous[i]->matricule, tous[i]->moyenne);
    }
}

void freeEd(Etudiant** tous, int taille) {
    for (int i = 0; i < taille; i++) {
        free(tous[i]);
    }
    free(tous);
}
