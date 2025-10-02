#include <stdio.h>

int main() {
    int nombre;

    // Demander un entier à l'utilisateur
    printf("Entrez un nombre entier : \n");
    scanf("%d", &nombre);

    // Taille en bits (ici pour un int sur 32 bits)
    int taille = sizeof(int) * 8;

    printf("Représentation binaire de %d :\n", nombre);

    // Parcourir chaque bit en partant du plus significatif
    for (int i = taille - 1; i >= 0; i--) {
        int bit = (nombre >> i) & 1;
        printf("%d", bit);

        // Option : ajouter un espace tous les 4 bits pour plus de lisibilité
        if (i % 4 == 0) {
            printf(" ");
        }
    }

    printf("\n");
}

