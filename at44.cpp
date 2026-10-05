#include <stdio.h>

int main() {
    int limite;
    long long a = 0, b = 1, proximo;

    scanf("%d", &limite);

    while (a <= limite) {
        printf("%lld ", a);

        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("%lld\n", a);

    return 0;
}