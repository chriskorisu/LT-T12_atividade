#include <stdio.h>

int main() {
    int a, b, c;

    for (a = 1; a < 1000; a++) {
        for (b = a + 1; b < 1000; b++) {
            c = 1000 - a - b;

            if (c > b && a * a + b * b == c * c) {
                printf("a = %d\n", a);
                printf("b = %d\n", b);
                printf("c = %d\n", c);
                printf("Produto = %d\n", a * b * c);

                return 0;
            }
        }
    }

    return 0;
}