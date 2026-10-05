#include <stdio.h>

int main() {
    int n, i, primo = 1;

    scanf("%d", &n);

    if (n <= 1) {
        primo = 0;
    }

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo) {
        printf("E primo.\n");
    } else {
        printf("Nao e primo.\n");
    }

    return 0;
}