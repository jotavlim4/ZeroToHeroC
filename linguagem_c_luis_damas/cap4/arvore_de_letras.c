#include <stdio.h>

int main() {
    int ramos;
    char letra = 'A';

    printf("Digite o número de ramos: ");
    scanf("%d", &ramos);

    for(int i = 0; i < ramos; i++) {
        for(int j = 0; j <= i; j++)
            putchar(letra + i);
        putchar('\n');
    }
    return 0;
}