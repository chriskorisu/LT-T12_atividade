#include <stdio.h>

int main() {
    int i;
    float valor, soma = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite um valor: ");
        scanf("%f", &valor);
        soma += valor;
    }

    printf("Soma = %.2f\n", soma);

    return 0;
}