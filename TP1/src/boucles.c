#include <stdio.h>

int main() {
  // Taille du triangle, doit être < 10
  int compteur = 5;

  if (compteur >= 10) {
      printf("La valeur de compteur doit être strictement inférieure à 10.\n");
  }
  else {
    // Boucle pour les lignes
    for (int i = 1; i <= compteur; i++) {
        // Boucle pour afficher les étoiles sur chaque ligne
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Retour à la ligne après chaque ligne d'étoiles
    }
  }
}

