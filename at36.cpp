#include <stdio.h>

int main() {
    int i;
    long somaQuadrados = 0, soma = 0;

    for (i = 1; i <= 100; i++) {
        somaQuadrados += i * i;
        soma += i;
    }

    printf("Diferenca = %ld\n", soma * soma - somaQuadrados);

    return 0;
}