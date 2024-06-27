#include <stdio.h>

//void linha();

int main() {

    linha();
    printf("Hello, world!\n");
    linha();

    return 0;
}

void linha() {
    int i;

    for(i = 0; i < 20; i++)
        putchar('*');
    putchar('\n');
}

/*
O que acontece com esse código?

o compilador vai lendo sequencialmente linha a linha do código e se depara
com a chamda 'linha()', como esse procedimento nao foi declarado antes o
próprio compilador criar o cabeçalho 'int linha();'.

mais tarde o compiltador vai chegar a declaração da funcao linha, e vai perceber
que a mesma funcao esta declarada com um tipo diferente 'void linha();' 

logo vai apresentar um erro de redefinição, uma vez que nao podem existir funcoes 
diferentes com o mesmo nome.

para resolver isso declaramos (protótipo) a funcao antes da funcao main como se fosse uma varivel,
declarando o tipo, nome e paramentos seguido de ';'


*/