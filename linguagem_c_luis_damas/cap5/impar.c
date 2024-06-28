#include <stdio.h>

int impar(int num) {
    return num % 2 == 1;
}

int main() {
    int number;

    printf("Digite um número inteiro: "); 
    scanf("%d", &number);

    if(impar(number))
        printf("É impar!\n");
    else
        printf("É par!\n");

    return 0;
}