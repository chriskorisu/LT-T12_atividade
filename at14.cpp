#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    if (n % 2 != 0) {
        n--;
    }

    for (i = n; i >= 0; i -= 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}