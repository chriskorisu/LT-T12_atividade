#include <stdio.h>

int main() {
    int a, b, i, inicio, fim;
    int somaPares = 0;
    long long produtoImpares = 1;
    int encontrouImpar = 0;

    scanf("%d%d", &a, &b);

    if (a < b) {
        inicio = a;
        fim = b;
    } else {
        inicio = b;
        fim = a;
    }

    for (i = inicio; i <= fim; i++) {
        if (i % 2 == 0) {
            somaPares += i;
        } else {
            produtoImpares *= i;
            encontrouImpar = 1;
        }
    }

    printf("Soma dos pares = %d\n", somaPares);

    if (encontrouImpar) {
        printf("Produto dos impares = %lld\n", produtoImpares);
    } else {
        printf("Nao ha numeros impares.\n");
    }

    return 0;
}