#include <stdio.h>

int main() {
    float nota, soma = 0;
    int quantidade = 0;

    while (1) {
        printf("Digite uma nota negativa para terminar: ");
        scanf("%f", &nota);

        if (nota < 0) {
            break;
        }

        soma += nota;
        quantidade++;
    }

    if (quantidade > 0) {
        printf("Media = %.2f\n", soma / quantidade);
    } else {
        printf("Nenhuma nota informada.\n");
    }

    return 0;
}