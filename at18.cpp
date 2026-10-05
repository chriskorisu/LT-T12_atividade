#include <stdio.h>

int main() {
    int quantidade, i, n, maior, vezes = 0;

    printf("Quantos numeros serao lidos? ");
    scanf("%d", &quantidade);

    for (i = 1; i <= quantidade; i++) {
        scanf("%d", &n);

        if (i == 1 || n > maior) {
            maior = n;
            vezes = 1;
        } else if (n == maior) {
            vezes++;
        }
    }

    if (quantidade > 0) {
        printf("Maior = %d\n", maior);
        printf("Quantidade de vezes = %d\n", vezes);
    }

    return 0;
}