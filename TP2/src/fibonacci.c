#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, suivant;

    // On rentre le nombre de termes de la suite.
    printf("Entrez le nombre de termes de la suite de Fibonacci : \n");
    scanf("%d", &n);

    printf("Suite de Fibonacci jusqu'à U%d :\n", n);

    // Cas particuliers
    if (n >= 0) {
        printf("%d", a); // U0
    }
    if (n >= 1) {
        printf(", %d", b); // U1
    }

    // Calcul des termes suivants
    for (i = 2; i <= n; i++) {
        suivant = a + b;
        printf(", %d", suivant);
        a = b;
        b = suivant;
    }

    printf("\n");
}
