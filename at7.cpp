#include <stdio.h>

int main() {
    int i, valor, quantidade = 0, soma = 0;

    for (i = 1; i <= 10; i++) {
        scanf("%d", &valor);

        if (valor > 0) {
            soma += valor;
            quantidade++;
        }
    }

    if (quantidade > 0) {
        printf("Media = %.2f\n", (float)soma / quantidade);
    } else {
        printf("Nenhum valor positivo foi informado.\n");
    }

    return 0;
}