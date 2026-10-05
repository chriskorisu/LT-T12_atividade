#include <stdio.h>

int main() {
    int n, i, soma = 0;

    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }

    printf("Soma dos divisores = %d\n", soma);

    return 0;
}