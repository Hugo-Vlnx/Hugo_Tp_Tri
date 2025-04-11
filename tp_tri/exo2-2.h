#ifndef ED2_H
#define ED2_H


typedef struct {
    char nom[50];
    char prenom[50];
    int matricule;
    float moyenne;
} Etudiant;


Etudiant** creer_tab(int taille);
Etudiant* creer_etudiant(char nom[50], char prenom[50], int matricule, float moyenne);
void tri_insertion(Etudiant** tab, int taille);
void afficher_etudiants(Etudiant** tab, int taille);
void liberer_etudiants(Etudiant** tab, int taille);

#endif