#include <stdio.h>

int main() {
    // On crée la variable somme pour pouvoir l'utiliser par la suite.
    int somme = 0;

    // Boucle de 1 à 1000
    for (int i = 1; i <= 1000; i++) {

        // Si divisible par 5 ou 7, on l'ajoute à la somme.
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }
      
        // Si divisible par 11, on passe au nombre suivant.
        if (i % 11 == 0) {
            continue;
        }

        // Si la somme dépasse 5000, on arrête la boucle.
        if (somme > 5000) {
            break;
        }
    }

    // Affichage du résultat final.
    printf("Somme finale = %d\n", somme);
}
