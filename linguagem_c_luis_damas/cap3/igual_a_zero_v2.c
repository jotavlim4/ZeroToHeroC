#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if(num)
        printf("É diferente de zero!\n");
    else
        printf("É nulo!\n");

    return 0;
}