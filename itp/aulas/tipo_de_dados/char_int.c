#include <stdio.h>

int main() {
    char letra = 'c';
    
    printf("%d", letra);
    printf("%c", 120);
    
    return 0;
}

/*
O que acontece?

No primerio printf corre a conversão do conteúdo em letra para valor decimal. Pois usamos o placeholder %d, que é usado
para números inteiros, para formatar o conteúdo de uma variável que guardar um valor do tipo char. Logo o valor impresso é 
o código númerio associado a letra 'c' na tabela ascii.

No segundo printf ocorre o inverso. Usamos o placeholder %c, usado para tipos char, para imprimir um número literal inteiro.
Então ocorre a conversão e o valor exibido é o código ascii correspondente ao número 120.

*/