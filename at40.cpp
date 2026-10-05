#include <stdio.h>

int main() {
    int n, maior, menor, quantidade = 0;

    while (1) {
        scanf("%d", &n);

        if (n < 0) {
            break;
        }

        if (quantidade == 0) {
            maior = n;
            menor = n;
        } else {
            if (n > maior) {
                maior = n;
            }

            if (n < menor) {
                menor = n;
            }
        }

        quantidade++;
    }

    if (quantidade > 0) {
        printf("Maior = %d\n", maior);
        printf("Menor = %d\n", menor);
    } else {
        printf("Nenhum numero valido foi informado.\n");
    }

    return 0;
}