#include <stdio.h>

#define N 5        // Nombre d'étudiants
#define TAILLE 50  // Taille maximale pour les chaînes

int main() {
    char noms[N][TAILLE] = {
        "Dupont", "Martin", "Durand", "Leroy", "Bernard"
    };

    char prenoms[N][TAILLE] = {
        "Alice", "Paul", "Sophie", "Lucas", "Emma"
    };

    char adresses[N][TAILLE] = {
        "12 Rue de Paris", 
        "34 Avenue Victor Hugo", 
        "56 Boulevard Voltaire", 
        "78 Rue Nationale", 
        "90 Avenue de Bretagne"
    };

    float notesProg[N] = {14.5, 12.0, 16.0, 10.5, 18.0};
    float notesSys[N]  = {13.0, 15.5, 11.0, 14.0, 17.5};

    printf("===== Informations des étudiants =====\n\n");
    for (int i = 0; i < N; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Nom       : %s\n", noms[i]);
        printf("Prénom    : %s\n", prenoms[i]);
        printf("Adresse   : %s\n", adresses[i]);
        printf("Note en Programmation C : %.2f\n", notesProg[i]);
        printf("Note en Système d'exploitation : %.2f\n", notesSys[i]);
        printf("-------------------------------------\n");
    }
}
