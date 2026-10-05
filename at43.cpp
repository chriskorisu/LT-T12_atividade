#include <stdio.h>

int main() {
    int idade, total = 0, quantidade = 0;

    while (1) {
        scanf("%d", &idade);

        if (idade == 0) {
            break;
        }

        if (idade > 0) {
            total += idade;
            quantidade++;
        }
    }

    if (quantidade > 0) {
        printf("Media das idades = %.2f\n", (float)total / quantidade);
    } else {
        printf("Nenhuma idade informada.\n");
    }

    return 0;
}