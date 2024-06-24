#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro:");
    scanf("%d", &num);

    switch(num){
        case 0: printf("O número é nulo!\n"); break;
        default: printf("Não é nulo!\n");
    }
}