#include <stdio.h>

int main() {
    int i, n, menor, maior;

    for (i = 1; i <= 10; i++) {
        scanf("%d", &n);

        if (i == 1) {
            menor = n;
            maior = n;
        } else {
            if (n < menor) {
                menor = n;
            }

            if (n > maior) {
                maior = n;
            }
        }
    }

    printf("Menor = %d\n", menor);
    printf("Maior = %d\n", maior);

    return 0;
}