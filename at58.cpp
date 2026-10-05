#include <stdio.h>

int main() {
    int a, b, n, i, primo, temp;
    long long soma = 0;

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
            soma += n;
        }
    }

    printf("Soma dos primos = %lld\n", soma);

    return 0;
}