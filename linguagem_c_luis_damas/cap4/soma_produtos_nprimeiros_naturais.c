#include <stdio.h>

int main() {
    int soma, produto, i, num;

    printf("Digite um número: ");
    scanf("%d", &num);

    for(soma = 0, produto = i = 1; i <= num; i = i + 1){
        soma = soma + i;
        produto = produto * i;
    }

    printf("Soma = %2ld\n", soma);
    printf("Produto = %2ld\n", produto);

    return 0;
}