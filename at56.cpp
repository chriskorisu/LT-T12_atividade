#include <stdio.h>

int main() {
    int n, i, primo;
    long long soma = 0;

    for (n = 2; n < 2000000; n++) {
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

    printf("Soma = %lld\n", soma);

    return 0;
}