#include <stdio.h>
#include <string.h>

#define N 5        // nombre d'étudiants
#define TAILLE 50  // taille max des chaînes

struct Etudiant {
    char nom[TAILLE];
    char prenom[TAILLE];
    char adresse[TAILLE];
    float noteProg;
    float noteSys;
};

int main() {
    struct Etudiant etudiants[N];

    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20 Boulevard Niels Bohr, Lyon");
    etudiants[0].noteProg = 16.5;
    etudiants[0].noteSys  = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22 Boulevard Niels Bohr, Lyon");
    etudiants[1].noteProg = 14.0;
    etudiants[1].noteSys  = 14.1;

    strcpy(etudiants[2].nom, "Durand");
    strcpy(etudiants[2].prenom, "Sophie");
    strcpy(etudiants[2].adresse, "15 Rue de la République, Lyon");
    etudiants[2].noteProg = 18.0;
    etudiants[2].noteSys  = 16.5;

    strcpy(etudiants[3].nom, "Leroy");
    strcpy(etudiants[3].prenom, "Lucas");
    strcpy(etudiants[3].adresse, "10 Avenue Jean Jaurès, Lyon");
    etudiants[3].noteProg = 11.5;
    etudiants[3].noteSys  = 13.0;

    strcpy(etudiants[4].nom, "Bernard");
    strcpy(etudiants[4].prenom, "Emma");
    strcpy(etudiants[4].adresse, "5 Rue Victor Hugo, Lyon");
    etudiants[4].noteProg = 17.0;
    etudiants[4].noteSys  = 18.0;

    for (int i = 0; i < N; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom       : %s\n", etudiants[i].nom);
        printf("Prénom    : %s\n", etudiants[i].prenom);
        printf("Adresse   : %s\n", etudiants[i].adresse);
        printf("Note Programmation C : %.2f\n", etudiants[i].noteProg);
        printf("Note Système d'exploitation : %.2f\n", etudiants[i].noteSys);
        printf("-----------------------------------------\n");
    }
}
