#include <stdio.h>
#include <stdint.h>

extern char c;
extern signed char sc;
extern unsigned char uc;

extern short s;
extern unsigned short us;

extern int i;
extern unsigned int ui;

extern long l;
extern unsigned long ul;

extern long long ll;
extern unsigned long long ull;

extern float f;
extern double d;
extern long double ld;

int main() {
    char *pc = &c;
    signed char *psc = &sc;
    unsigned char *puc = &uc;

    short *ps = &s;
    unsigned short *pus = &us;

    int *pi = &i;
    unsigned int *pui = &ui;

    long *pl = &l;
    unsigned long *pul = &ul;

    long long *pll = &ll;
    unsigned long long *pull = &ull;

    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant manipulation :\n");
    printf("Adresse de c : %p, Valeur : %02x\n", (void*)pc, (unsigned char)*pc);
    printf("Adresse de sc : %p, Valeur : %02x\n", (void*)psc, (unsigned char)*psc);
    printf("Adresse de uc : %p, Valeur : %02x\n", (void*)puc, (unsigned char)*puc);

    printf("Adresse de s : %p, Valeur : %04x\n", (void*)ps, (unsigned short)*ps);
    printf("Adresse de us : %p, Valeur : %04x\n", (void*)pus, (unsigned short)*pus);

    printf("Adresse de i : %p, Valeur : %08x\n", (void*)pi, (unsigned int)*pi);
    printf("Adresse de ui : %p, Valeur : %08x\n", (void*)pui, (unsigned int)*pui);

    printf("Adresse de l : %p, Valeur : %016lx\n", (void*)pl, (unsigned long)*pl);
    printf("Adresse de ul : %p, Valeur : %016lx\n", (void*)pul, (unsigned long)*pul);

    printf("Adresse de ll : %p, Valeur : %016llx\n", (void*)pll, (unsigned long long)*pll);
    printf("Adresse de ull : %p, Valeur : %016llx\n", (void*)pull, (unsigned long long)*pull);

    printf("Adresse de f : %p, Valeur : %08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur : %016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur : ??? (long double dépend de l'architecture)\n", (void*)pld);

    printf("\n");
  
    *pc += 1;
    *psc += 1;
    *puc -= 1;

    *ps += 10;
    *pus -= 10;

    *pi += 20;
    *pui -= 20;

    *pl += 1000;
    *pul -= 1000;

    *pll += 10000;
    *pull -= 10000;

    *pf += 1.5;
    *pd -= 1.5;

    printf("Après manipulation :\n");
    printf("Adresse de c : %p, Valeur : %02x\n", (void*)pc, (unsigned char)*pc);
    printf("Adresse de sc : %p, Valeur : %02x\n", (void*)psc, (unsigned char)*psc);
    printf("Adresse de uc : %p, Valeur : %02x\n", (void*)puc, (unsigned char)*puc);

    printf("Adresse de s : %p, Valeur : %04x\n", (void*)ps, (unsigned short)*ps);
    printf("Adresse de us : %p, Valeur : %04x\n", (void*)pus, (unsigned short)*pus);

    printf("Adresse de i : %p, Valeur : %08x\n", (void*)pi, (unsigned int)*pi);
    printf("Adresse de ui : %p, Valeur : %08x\n", (void*)pui, (unsigned int)*pui);

    printf("Adresse de l : %p, Valeur : %016lx\n", (void*)pl, (unsigned long)*pl);
    printf("Adresse de ul : %p, Valeur : %016lx\n", (void*)pul, (unsigned long)*pul);

    printf("Adresse de ll : %p, Valeur : %016llx\n", (void*)pll, (unsigned long long)*pll);
    printf("Adresse de ull : %p, Valeur : %016llx\n", (void*)pull, (unsigned long long)*pull);

    printf("Adresse de f : %p, Valeur : %08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur : %016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur : ??? (long double dépend de l'architecture)\n", (void*)pld);
}
