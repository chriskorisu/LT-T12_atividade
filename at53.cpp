#include <stdio.h>

int main() {
    int n, i, j, numero = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", numero);
            numero++;
        }

        printf("\n");
    }

    return 0;
}