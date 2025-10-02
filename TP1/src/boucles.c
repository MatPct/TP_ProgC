#include <stdio.h>

int main() {
  // Taille du triangle, doit être < 10
  int compteur = 5;

  // Version avec une boucle for.
  // On teste la valeur du compteur pour vérifier s'il respecte bien la condition.
  if (compteur >= 10) {
      printf("La valeur du compteur doit être strictement inférieure à 10.\n");
  }
  else {
    // Boucle pour les lignes
    for (int i = 1; i <= compteur; i++) {
        // Boucle pour afficher les étoiles sur chaque ligne
        for (int j = 1; j <= i; j++) {
            // Le 1er  et dernier caractère ont le motif : *
            if (j == 1 || j == i || i == compteur) {
                printf("*");
            } 
            else {
                // Les caractères internes ont le motif : #
                printf("#");
            }
        }
        // Retour à la ligne après chaque ligne
        printf("\n"); 
    }
  }

  // Version avec une boucle while.
  if (compteur >= 10) {
      printf("La valeur du compteur doit être strictement inférieure à 10.\n");
  }
  else {
    int i = 1;
    while (i <= compteur) {
        int j = 1; // compteur pour les colonnes
        while (j <= i) {
            // Le premier et le dernier de chaque ligne sont toujours '*'
            if (j == 1 || j == i) {
                printf("*");
            } 
            else {
                printf("#");
            }

            printf(" "); // espace entre les caractères
            j++;
        }
        printf("\n"); // retour à la ligne après chaque ligne
        i++;
    }
  }
}








