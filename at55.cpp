#include <stdio.h>

int main() {
    int n, encontrados = 0, numero = 2, i, primo;
    long long soma = 0;

    scanf("%d", &n);

    while (encontrados < n) {
        primo = 1;

        for (i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                primo = 0;
                break;
            }
        }

        if (primo) {
            soma += numero;
            encontrados++;
        }

        numero++;
    }

    printf("Soma = %lld\n", soma);

    return 0;
}