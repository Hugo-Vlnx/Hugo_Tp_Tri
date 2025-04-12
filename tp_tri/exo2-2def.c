//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include "exo2-2.h"
//
//
//
//
//
//
//
//
//int main() {
//    const int nb_etud = 5;
//    Etudiant** etudiants = creer_tab(nb_etud);
//
//
//    etudiants[0] = creer_etudiant("Hurvois", "Martin", 2, 16.0);
//    etudiants[1] = creer_etudiant("Souchet", "Raphael", 1, 14.5);
//    etudiants[2] = creer_etudiant("xxx", "yyy", 3, 12.0);
//    etudiants[3] = creer_etudiant("Vialaneix", "Hugo", 4, 18.5);
//    etudiants[4] = creer_etudiant("Sabadie", "Aylia", 5, 15.0);
//
//    printf("Avant le tri:\n");
//    afficher_etudiants(etudiants, nb_etud);
//    tri_insertion(etudiants, nb_etud);
//    printf("\nAprès le tri:\n");
//    afficher_etudiants(etudiants, nb_etud);
//    liberer_etudiants(etudiants, nb_etud);
//
//    return 0;
//}