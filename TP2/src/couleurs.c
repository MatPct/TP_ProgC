#include <stdio.h>

#define N 10

struct Couleur {
    unsigned char R;
    unsigned char G;
    unsigned char B;
    unsigned char A;
};

int main() {
    struct Couleur couleurs[N] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0x00, 0x7f, 0xff, 0xff},
        {0xff, 0x00, 0x00, 0xff},
        {0x00, 0xff, 0x00, 0xff},
        {0x00, 0x00, 0xff, 0xff},
        {0xff, 0xff, 0x00, 0xff},
        {0xff, 0x00, 0xff, 0xff},
        {0x00, 0xff, 0xff, 0xff},
        {0x80, 0x80, 0x80, 0xff}
    };

    for (int i = 0; i < N; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", couleurs[i].R);
        printf("Vert  : %d\n", couleurs[i].G);
        printf("Bleu  : %d\n", couleurs[i].B);
        printf("Alpha : %d\n", couleurs[i].A);
        printf("-------------------\n");
    }
}
