#include <stdio.h>

int main() {
  printf("Taille des types de base en C (en octets) :");
  
  printf("char : %zu octet(s)\n", sizeof(char));
  printf("signed char : %zu octet(s)\n", sizeof(signed char));
  printf("unsigned char : %zu octet(s)\n", sizeof(unsigned char));

  printf("short : %ld octet(s)\n", sizeof(short));
  printf("signed short : %ld octet(s)\n", sizeof(signed short));
  printf("unsigned short : %ld octet(s)\n", sizeof(unsigned short));

  printf("int : %ld octet(s)\n", sizeof(int));
  printf("signed int : %ld octet(s)\n", sizeof(signed int));
  printf("unsigned int : %ld octet(s)\n", sizeof(unsigned int));

  printf("long int : %ld octet(s)\n", sizeof(long int));
  printf("signed long int : %ld octet(s)\n", sizeof(signed long int));
  printf("unsigned long int : %ld octet(s)\n", sizeof(unsigned long int));

  printf("long long int : %ld octet(s)\n", sizeof(long long int));
  printf("signed long long int : %ld octet(s)\n", sizeof(signed long long int));
  printf("unsigned long long int : %ld octet(s)\n", sizeof(unsigned long long int));

  printf("float : %ld octet(s)\n", sizeof(float));

  printf("double : %ld octet(s)\n", sizeof(double));

  printf("long double : %ld octet(s)\n", sizeof(long double));
}













