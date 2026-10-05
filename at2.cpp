#include <stdio.h>

int main() {
    int i, repeticao;

    for (repeticao = 1; repeticao <= 3; repeticao++) {
        for (i = 1; i <= 100; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}