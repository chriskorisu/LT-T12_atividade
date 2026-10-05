#include <stdio.h>

int main() {
    int n, i;
    double h = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        h += 1.0 / i;
    }

    printf("H(n) = %.6f\n", h);

    return 0;
}