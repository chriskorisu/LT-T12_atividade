#include <stdio.h>

int main() {
    int valor;
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int i, quantidade;

    printf("Valor do saque: ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Valor invalido.\n");
        return 0;
    }

    for (i = 0; i < 7; i++) {
        quantidade = valor / notas[i];

        if (quantidade > 0) {
            printf("%d nota(s) de %d reais\n",
                   quantidade, notas[i]);

            valor %= notas[i];
        }
    }

    return 0;
}