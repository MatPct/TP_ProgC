#include <stdio.h>

int main() {
  // Variables de type char
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    // Variables de type short
    short s = -30000;
    unsigned short us = 60000;

    // Variables de type int
    int i = -1000;
    unsigned int ui = 4000;

    // Variables de type long
    long l = -100000L;
    unsigned long ul = 100000UL;

    // Variables de type long long
    long long ll = -1000000000LL;
    unsigned long long ull = 1000000000ULL;

    // Variables de type flottant
    float f = 3.14f;
    double d = 3.14159265359;
    long double ld = 3.141592653589793238L;

    // Affichage des variables
    printf("char c = %c\n", c);
    printf("signed char sc = %d\n", sc);
    printf("unsigned char uc = %u\n", uc);

    printf("short s = %d\n", s);
    printf("unsigned short us = %u\n", us);

    printf("int i = %d\n", i);
    printf("unsigned int ui = %u\n", ui);

    printf("long l = %ld\n", l);
    printf("unsigned long ul = %lu\n", ul);

    printf("long long ll = %lld\n", ll);
    printf("unsigned long long ull = %llu\n", ull);

    printf("float f = %f\n", f);
    printf("double d = %lf\n", d);
    printf("long double ld = %Lf\n", ld);
}

