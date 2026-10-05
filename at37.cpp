#include <stdio.h>

int main() {
    int n, a, b, soma, quadrado;

    for (n = 1000; n <= 9999; n++) {
        a = n / 100;
        b = n % 100;

        soma = a + b;
        quadrado = soma * soma;

        if (quadrado == n) {
            printf("%d: %d + %d = %d; %d^2 = %d\n",
                   n, a, b, soma, soma, quadrado);
        }
    }

    return 0;
}