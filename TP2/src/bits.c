#include <stdio.h>

int main() {
    int d = 0x10001000;  // Exemple de valeur à tester
    int taille = sizeof(int) * 8; // Taille d'un int en bits (souvent 32)

    // Positions des bits à vérifier (de gauche)
    int pos4  = taille - 4;   // 4ème bit depuis la gauche
    int pos20 = taille - 20;  // 20ème bit depuis la gauche

    // Extraction des bits avec décalage et masquage
    int bit4  = (d >> pos4) & 1;
    int bit20 = (d >> pos20) & 1;

    // Vérification
    if (bit4 == 1 && bit20 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }
}
