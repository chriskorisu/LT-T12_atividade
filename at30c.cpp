#include <stdio.h>

int main() {
    int n, i, soma = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        soma += 2 * i - 1;
    }

    printf("S = %d\n", soma);

    return 0;
}