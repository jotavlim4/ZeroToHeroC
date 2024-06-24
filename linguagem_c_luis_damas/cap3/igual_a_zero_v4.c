#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if(0 <= num && num <= 0 )
        printf("É nulo!\n");
    else
        printf("É diferente de zero!\n");

    return 0;
}