#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    for(int i = 1, j = num; i <= num; i++, j--)
        printf("%02d %02d\n", i, j);

    return 0;
}