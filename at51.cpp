#include <stdio.h>

int main() {
    int ano;
    double salario = 2000.0;
    double percentual = 1.5;

    for (ano = 1996; ano <= 2026; ano++) {
        salario += salario * percentual / 100.0;
        percentual *= 2;
    }

    printf("Salario em 2026 = %.2f\n", salario);

    return 0;
}