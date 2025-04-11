#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exo2-2.h"



Etudiant** creer_tab(int taille) {
    Etudiant** tab = malloc(taille * sizeof(Etudiant*));
    if (tab == NULL) {
        return NULL;
    }
    return tab;
}


Etudiant* creer_etudiant(char nom[50],char prenom[50], int matricule, float moyenne) {
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


void tri_insertion(Etudiant** tab, int taille) {
    for (int i = 1; i < taille; i++) {
        Etudiant* cle = tab[i];
        int j = i - 1;

        
        while (j >= 0 && strcmp(tab[j]->nom, cle->nom) > 0) {
            tab[j + 1] = tab[j];
            j--;
        }
        tab[j + 1] = cle;
    }
}


void afficher_etudiants(Etudiant** tab, int taille) {
    
    for (int i = 0; i < taille; i++) {
        printf("%s %s Matricule: %d, Moyenne: %.2f\n",tab[i]->nom, tab[i]->prenom, tab[i]->matricule, tab[i]->moyenne);
    }
    
}


void liberer_etudiants(Etudiant** tab, int taille) {
    for (int i = 0; i < taille; i++) {
        free(tab[i]);
    }
    free(tab);
}

