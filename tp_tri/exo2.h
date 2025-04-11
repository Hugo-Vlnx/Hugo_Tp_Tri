#ifndef ED_H
#define ED_H


typedef struct {
    char nom[50];
    char prenom[50];
    int matricule;
    float moyenne;
} Etudiant;


void swap2(Etudiant* a, Etudiant* b);
Etudiant** creerTab(int n);
Etudiant* creerEtudiant(char nom[50], char prenom[50], int matricule, float moyenne);
int partition(Etudiant** tous, int low, int high);
void quicksort(Etudiant** tous, int low, int high);
void afficherEtudiants(Etudiant** tous, int taille);
void freeEd(Etudiant** tous, int taille);



#endif