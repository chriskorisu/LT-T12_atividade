#include <stdio.h>

int main() {
    double chico = 1.50, ze = 1.10;
    int anos = 0;

    while (ze <= chico) {
        chico += 0.02;
        ze += 0.03;
        anos++;
    }

    printf("Anos = %d\n", anos);
    printf("Chico = %.2f m\n", chico);
    printf("Ze = %.2f m\n", ze);

    return 0;
}