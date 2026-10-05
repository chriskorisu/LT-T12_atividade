#include <stdio.h>

int main() {
    int a, b, produto, inverso, resto, maior = 0;

    for (a = 10; a <= 99; a++) {
        for (b = 10; b <= 99; b++) {
            produto = a * b;
            inverso = 0;
            resto = produto;

            while (resto > 0) {
                inverso = inverso * 10 + resto % 10;
                resto /= 10;
            }

            if (produto == inverso && produto > maior) {
                maior = produto;
            }
        }
    }

    printf("Maior palindromo = %d\n", maior);

    return 0;
}