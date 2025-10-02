#include <stdio.h>

int main() {
    // base
    int a = 2;
    // exposant
    int b = 3;
    // stocke le résultat
    int resultat = 1;
    int i;

    // Boucle pour calculer a^b
    for (i = 1; i <= b; i++) {
        resultat *= a;
    }

    // Affichage du résultat
    printf("%d à la puissance %d = %d\n", a, b, resultat);
}


