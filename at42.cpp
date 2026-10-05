#include <stdio.h>
#include <math.h>

int main() {
    double n;

    while (1) {
        scanf("%lf", &n);

        if (n < 0) {
            break;
        }

        printf("Quadrado = %.2f\n", n * n);
        printf("Cubo = %.2f\n", n * n * n);
        printf("Raiz quadrada = %.2f\n", sqrt(n));
    }

    return 0;
}