#include <stdio.h>

int main() {
    int n, pares = 0, impares = 0;

    do {
        scanf("%d", &n);

        if (n != 1000) {
            if (n % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        }
    } while (n != 1000);

    printf("Pares = %d\n", pares);
    printf("Impares = %d\n", impares);

    return 0;
}