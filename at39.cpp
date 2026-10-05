#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Digite a base e a altura: ");
    scanf("%f%f", &base, &altura);

    if (base <= 0 || altura <= 0) {
        printf("Valores invalidos.\n");
    } else {
        area = base * altura / 2;
        printf("Area = %.2f\n", area);
    }

    return 0;
}