#include <stdio.h>

int main() {
    int n, i;
    double e = 1.0;
    double fatorial = 1.0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fatorial *= i;
        e += 1.0 / fatorial;
    }

    printf("E = %.6f\n", e);

    return 0;
}