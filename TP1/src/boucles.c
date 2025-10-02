#include <stdio.h>

int main() {
  // Taille du triangle, doit être < 10
  int compteur = 5;

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
}





