#include <stdio.h>
#include <string.h>

int main() {
  printf("Taille des types de base en C (en octets) :");
  
  printf("char : %zu octet(s)\n", sizeof(char));
  printf("signed char", sizeof(signed char));
  printf("unsigned char", sizeof(unsigned char));

  printf("short", sizeof(short));
  printf("signed shot", sizeof(signed short));
  printf("unsigned short", sizeof(unsigned short));

  printf("int", sizeof(int));
  printf("signed int", sizeof(signed int));
  printf("unsigned int", sizeof(unsigned int));

  printf("long int", sizeof(long int));
  printf("signed long int", sizeof(signed long int));
  printf("unsigned long int", sizeof(unsigned long int));

  printf("long long int", sizeof(long long int));
  printf("signed long long int", sizeof(signed long long int));
  printf("unsigned long long int", sizeof(unsigned long long int));

  printf("float", sizeof(float));

  printf("double", sizeof(double));

  printf("long double", sizeof(long double));
}




