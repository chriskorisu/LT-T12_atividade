#include <stdio.h>

int main() {
    double carlos, joao;
    int meses = 0;

    printf("Salario de Carlos e salario inicial de Joao: ");
    scanf("%lf%lf", &carlos, &joao);

    while (joao < carlos) {
        carlos *= 1.02;
        joao *= 1.05;
        meses++;
    }

    printf("Meses = %d\n", meses);
    printf("Carlos = %.2f\n", carlos);
    printf("Joao = %.2f\n", joao);

    return 0;
}