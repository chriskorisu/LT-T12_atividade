#include <stdio.h>

int main() {
    int i, soma = 0;

    for (i = 1; i <= 50; i++) {
        soma += i * 2;
    }

    printf("Soma = %d\n", soma);

    return 0;
}