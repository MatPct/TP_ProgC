#include <stdio.h>

int main() {
    // hauteur de la pyramide
    int n = 5; 
    int i, j;

    printf("Génération d'une pyramide de hauteur %d :\n\n", n);

    // Boucle pour chaque niveau
    for (i = 1; i <= n; i++) {

        // 1. Afficher les espaces pour centrer
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // 2. Afficher les nombres croissants de 1 à i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3. Afficher les nombres décroissants de i-1 à 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Nouvelle ligne après chaque niveau
        printf("\n");
    }

    printf("\nPyramide terminée\n");

}
