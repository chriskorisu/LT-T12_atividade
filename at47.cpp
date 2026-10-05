#include <stdio.h>

int main() {
    int opcao;
    double a, b;

    do {
        printf("1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Sair\n");

        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois numeros: ");
            scanf("%lf%lf", &a, &b);

            if (opcao == 1) {
                printf("Resultado = %.2f\n", a + b);
            } else if (opcao == 2) {
                printf("Resultado = %.2f\n", a - b);
            } else if (opcao == 3) {
                printf("Resultado = %.2f\n", a * b);
            } else if (opcao == 4) {
                if (b != 0) {
                    printf("Resultado = %.2f\n", a / b);
                } else {
                    printf("Nao e possivel dividir por zero.\n");
                }
            }
        } else if (opcao != 5) {
            printf("Opcao invalida.\n");
        }

    } while (opcao != 5);

    return 0;
}