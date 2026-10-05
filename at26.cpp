#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    for (i = n + 1; ; i++) {
        if (i % 11 == 0 || i % 13 == 0 || i % 17 == 0) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}