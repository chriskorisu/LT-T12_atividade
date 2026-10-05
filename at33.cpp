#include <stdio.h>

int main() {
    int n, i, j, x;

    scanf("%d%d%d", &n, &i, &j);

    for (x = 0; x < n; x++) {
        if (x % i == 0 || x % j == 0) {
            printf("%d ", x);
        }
    }

    printf("\n");
    return 0;
}