#include <stdio.h>

int main() {
    int a, b, n, i, primo, quantidade = 0, temp;

    scanf("%d%d", &a, &b);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    for (n = a; n <= b; n++) {
        if (n < 2) {
            continue;
        }

        primo = 1;

        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                primo = 0;
                break;
            }
        }

        if (primo) {
            quantidade++;
        }
    }

    printf("Quantidade de primos = %d\n", quantidade);

    return 0;
}