#include <stdio.h>

int main() {
    short idade;      /*equivalente a short int idade*/
    int montante;
    long conta;       /*equivalente a long int conta*/

    printf("Qual é a sua idade: "); scanf("%hd", &idade);    /*usamos %hd para leitura e escrita de short int*/
    printf("Qual é o montante a depositar: "); scanf("%d", &montante);
    printf("Qual é o número da conta: "); scanf("%ld", &conta); /*usamos %ld para leitura e escrita de long int*/

    printf("Uma pessoa de %hd anos depositou o valor de %d,00 na conta %ld.\n", idade, montante, conta);

    return 0;
}