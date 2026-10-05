#include <stdio.h>

int main() {
    int habitantes, i, codigo;
    int maiorCodigo = 0, menorCodigo = 0;
    int qtd1 = 0, qtd2 = 0, qtd3 = 0;

    double consumo, soma = 0;
    double maior = -1, menor = 1e30;

    double soma1 = 0, soma2 = 0, soma3 = 0;

    scanf("%d", &habitantes);

    for (i = 1; i <= habitantes; i++) {
        printf("Digite o consumo e o codigo: ");
        scanf("%lf%d", &consumo, &codigo);

        soma += consumo;

        if (consumo > maior) {
            maior = consumo;
            maiorCodigo = codigo;
        }

        if (consumo < menor) {
            menor = consumo;
            menorCodigo = codigo;
        }

        if (codigo == 1) {
            soma1 += consumo;
            qtd1++;
        } else if (codigo == 2) {
            soma2 += consumo;
            qtd2++;
        } else if (codigo == 3) {
            soma3 += consumo;
            qtd3++;
        }
    }

    printf("Maior consumo: %.2f (codigo %d)\n", maior, maiorCodigo);
    printf("Menor consumo: %.2f (codigo %d)\n", menor, menorCodigo);

    if (habitantes > 0) {
        printf("Media geral: %.2f\n", soma / habitantes);
    }

    if (qtd1 > 0) {
        printf("Media residencial: %.2f\n", soma1 / qtd1);
    }

    if (qtd2 > 0) {
        printf("Media comercial: %.2f\n", soma2 / qtd2);
    }

    if (qtd3 > 0) {
        printf("Media industrial: %.2f\n", soma3 / qtd3);
    }

    return 0;
}