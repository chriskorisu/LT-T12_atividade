#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i, d1, d2;

    srand((unsigned)time(NULL));

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        d1 = rand() % 6 + 1;
        d2 = rand() % 6 + 1;

        printf("%d + %d = %d\n", d1, d2, d1 + d2);
    }

    return 0;
}