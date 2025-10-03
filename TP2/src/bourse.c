#include <stdio.h>

int main() {
    int cours[15] = {1503, 1695, 1742, 1566, 2129, 2230, 1591, 1668, 2282, 1689, 2174, 2173, 2290, 1883, 1974};
    int n = 15;
    int perte_max = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int perte = cours[i] - cours[j];
            if (perte > perte_max) {
                perte_max = perte;
            }
        }
    }

    printf("La plus grande perte possible est : %d\n", perte_max);
}
