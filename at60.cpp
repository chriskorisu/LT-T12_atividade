#include <stdio.h>

int main() {
    int n, quantidade = 0, pares = 0, soma = 0;
    int maior, menor, digitos;
    int maiorDig = 0, menorDig = 100;
    double somaDig = 0;

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        if (quantidade == 0) {
            maior = n;
            menor = n;
        }

        if (n > maior) {
            maior = n;
        }

        if (n < menor) {
            menor = n;
        }

        if (n % 2 == 0) {
            pares++;
        }

        soma += n;

        digitos = 0;

        {
            int x = n;

            if (x < 0) {
                x = -x;
            }

            do {
                digitos++;
                x /= 10;
            } while (x != 0);
        }

        somaDig += digitos;

        if (digitos > maiorDig) {
            maiorDig = digitos;
        }

        if (digitos < menorDig) {
            menorDig = digitos;
        }

        quantidade++;
    }

    if (quantidade == 0) {
        printf("Nenhum numero informado.\n");
        return 0;
    }

    printf("Soma dos numeros = %d\n", soma);
    printf("Quantidade de numeros = %d\n", quantidade);
    printf("Media dos numeros = %.2f\n", (double)soma / quantidade);
    printf("Maior numero = %d\n", maior);
    printf("Menor numero = %d\n", menor);
    printf("Media de digitos = %.2f\n", somaDig / quantidade);
    printf("Maior quantidade de digitos = %d\n", maiorDig);
    printf("Menor quantidade de digitos = %d\n", menorDig);
    printf("Quantidade de numeros pares = %d\n", pares);

    return 0;
}