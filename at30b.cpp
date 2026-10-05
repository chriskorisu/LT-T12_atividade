#include <stdio.h>

int main() {
    int n, i, soma = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            soma += 2 * i - 1;
        } else {
            soma -= 2 * i;
        }
    }

    printf("S = %d\n", soma);

    return 0;
}