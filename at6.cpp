#include <stdio.h>

int main() {
    int i, valor, soma = 0;

    for (i = 1; i <= 10; i++) {
        scanf("%d", &valor);
        soma += valor;
    }

    printf("Media = %.2f\n", soma / 10.0);

    return 0;
}