#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secreto, palpite, tentativas = 0;

    srand((unsigned)time(NULL));
    secreto = rand() % 1000 + 1;

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        tentativas++;

        if (palpite < secreto) {
            printf("O numero e maior.\n");
        } else if (palpite > secreto) {
            printf("O numero e menor.\n");
        }

    } while (palpite != secreto);

    printf("Acertou em %d tentativas!\n", tentativas);

    return 0;
}