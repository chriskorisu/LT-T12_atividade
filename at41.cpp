#include <stdio.h>

int main() {
    double r, resultado = 0;

    while (1) {
        printf("Digite a resistencia (0 para terminar): ");
        scanf("%lf", &r);

        if (r == 0) {
            break;
        }

        if (r > 0) {
            resultado += 1.0 / r;
        } else {
            printf("A resistencia deve ser positiva.\n");
        }
    }

    if (resultado > 0) {
        printf("Resistencia equivalente = %.2f\n", 1.0 / resultado);
    } else {
        printf("Nenhuma resistencia valida informada.\n");
    }

    return 0;
}