#include <stdio.h>

int main() {
    int n;

    do {
        printf("Digite um numero entre 100 e 999: ");
        scanf("%d", &n);
    } while (n < 100 || n > 999);

    printf("%d\n", n / 100);
    printf("%d\n", (n / 10) % 10);
    printf("%d\n", n % 10);

    return 0;
}