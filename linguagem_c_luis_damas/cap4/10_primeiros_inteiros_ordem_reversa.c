#include <stdio.h>

int main() {
    int num;

    num = 10;
    while(num){
        printf("%d\n", num);
        num = num - 1;
    }
    return 0;
}

/*
-estamos usando 'num' como condição do while.

-como 'num' é diferente de zero a condição vai ser avalidada como
verdadeira, logo a instrução será executada 

-o valor de 'num' será impresso na tela.

-o valor de 'num' diminuirá uma unidade.

-isso vai ser repetir enquanto 'num' for diferente de zero,
pois quando ocorrer de 'num' ser igual a zero a condição será
avaliada como falsa e o corpo do laço não será mais executado.
*/