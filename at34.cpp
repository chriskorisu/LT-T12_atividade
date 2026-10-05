#include <stdio.h>

int main() {
    int n = 1, i, divisivel;

    while (1) {
        divisivel = 1;

        for (i = 1; i <= 10; i++) {
            if (n % i != 0) {
                divisivel = 0;
                break;
            }
        }

        if (divisivel) {
            break;
        }

        n++;
    }

    printf("%d\n", n);

    return 0;
}