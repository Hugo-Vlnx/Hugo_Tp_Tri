#ifndef MED_H
#define MED_H

typedef struct {
	char code[20];
	char nom[50];
	int dateFab;
	int datePer;
	float prix;
	int vendu;
	int stock;
	
}Meds;

void swap(Meds* medx, Meds* medy);
Meds* definirMed(int taille);
Meds** creerMeds(int taille);
void TriABulle(Meds** med, int taille);
void afficherTab(Meds** med, int taille);
void TriABulleNom(Meds** med, int taille);
void recherche_dicho(int debut, int fin, Meds** med,int taille);
void TriABullePrix(Meds** med, int taille);
void freeMed(Meds** med, int taille);
#endif