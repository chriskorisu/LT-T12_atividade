#include <stdio.h>
#include <string.h>

int main() {
    const char *unidades[] = {
        "", "um", "dois", "tres", "quatro",
        "cinco", "seis", "sete", "oito", "nove"
    };

    const char *de10a19[] = {
        "dez", "onze", "doze", "treze", "quatorze",
        "quinze", "dezesseis", "dezessete",
        "dezoito", "dezenove"
    };

    const char *dezenas[] = {
        "", "", "vinte", "trinta", "quarenta",
        "cinquenta", "sessenta", "setenta",
        "oitenta", "noventa"
    };

    const char *centenas[] = {
        "", "cento", "duzentos", "trezentos",
        "quatrocentos", "quinhentos", "seiscentos",
        "setecentos", "oitocentos", "novecentos"
    };

    int n, c, d, u, letras = 0;

    for (n = 1; n <= 1000; n++) {
        int tamanho = 0;

        if (n == 1000) {
            tamanho = 3;
        } else if (n == 100) {
            tamanho = 4;
        } else {
            c = n / 100;
            d = (n / 10) % 10;
            u = n % 10;

            if (c > 0) {
                tamanho += strlen(centenas[c]);
            }

            if (c > 0 && (d > 0 || u > 0)) {
                tamanho += 3;
            }

            if (d == 1) {
                tamanho += strlen(de10a19[u]);
            } else {
                if (d >= 2) {
                    tamanho += strlen(dezenas[d]);
                }

                if (d >= 2 && u > 0) {
                    tamanho += 3;
                }

                if (u > 0) {
                    tamanho += strlen(unidades[u]);
                }
            }
        }

        letras += tamanho;
    }

    printf("Total de letras = %d\n", letras);

    return 0;
}