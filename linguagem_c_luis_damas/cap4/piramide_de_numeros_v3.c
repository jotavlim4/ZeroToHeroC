#include <stdio.h>

int main() {
    int i, j, k, soma;

    j = 1;
    soma = 0;
    for(i = 1; i <= 20; i = i + 1) {
        for(k = 1; k <= i; k = k + 1, j = j + 1) {
            soma = soma + j;
            k == i ? printf("%03d\n", j) : printf("%03d ", j);
        }
    }
    putchar('\n');
    printf("soma = %3d\n", soma);

    return 0;
}