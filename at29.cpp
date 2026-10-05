#include <stdio.h>

int main() {
    int i, j;
    double s = 0, fatorial;

    for (i = 1; i <= 5; i++) {
        fatorial = 1;

        for (j = 1; j <= i + 1; j++) {
            fatorial *= j;
        }

        s += (double)i / fatorial;
    }

    printf("S = %.6f\n", s);

    return 0;
}