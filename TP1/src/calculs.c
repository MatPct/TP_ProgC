#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Demande des valeurs à l'utilisateur
    printf("Entrez le premier entier : ");
    scanf("%d", &num1);

    printf("Entrez le deuxième entier : ");
    scanf("%d", &num2);

    printf("Entrez un opérateur (+, -, *, /, %%, &, |, ~) : ");
    // espace avant %c pour ignorer les retours à la ligne
    scanf(" %c", &op); 

    // Structure switch pour choisir l'opération
    switch (op) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
            else
                printf("Erreur : division par zéro !\n");
            break;
        case '%':
            if (num2 != 0)
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            else
                printf("Erreur : modulo par zéro !\n");
            break;
        case '&':
            printf("%d & %d = %d\n", num1, num2, num1 & num2);
            break;
        case '|':
            printf("%d | %d = %d\n", num1, num2, num1 | num2);
            break;
        case '~':
            printf("~%d = %d\n", num1, ~num1);
            printf("~%d = %d\n", num2, ~num2);
            break;
        default:
            printf("Opérateur invalide !\n");
    }
}


