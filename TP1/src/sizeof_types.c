#include <stdio.h>
#include <string.h>

int main() {
  printf("Taille des types de base en C (en octets) :");
  
  printf("char", sizeof(char));
  printf("signed char", sizeof(signed char));
  printf("unsigned char", sizeof(unsigned char));

  printf("char", sizeof(short));
  printf("signed char", sizeof(signed short));
  printf("unsigned char", sizeof(unsigned short));

  printf("char", sizeof(int));
  printf("signed char", sizeof(signed int));
  printf("unsigned char", sizeof(unsigned int));

  printf("char", sizeof(long int));
  printf("signed char", sizeof(signed long int));
  printf("unsigned char", sizeof(unsigned long int));

  printf("char", sizeof(long long int));
  printf("signed char", sizeof(signed long long int));
  printf("unsigned char", sizeof(unsigned long long int));

  printf("char", sizeof(float));

  printf("char", sizeof(double));

  printf("char", sizeof(long double));
}



