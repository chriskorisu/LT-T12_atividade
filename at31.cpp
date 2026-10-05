#include <stdio.h>

int main() {
    int i;
    double s = 0;

    for (i = 1; i <= 50; i++) {
        s += (double)(2 * i - 1) / i;
    }

    printf("S = %.6f\n", s);

    return 0;
}