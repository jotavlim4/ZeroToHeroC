#include <stdio.h>

int main() {
    int ramos;
    
    printf("Digite o número de ramos: ");
    scanf("%d", &ramos);

    for(int i = 1; i <= ramos; i++) {
        for(int j = 1; j <= i; j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}