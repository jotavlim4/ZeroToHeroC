#include <stdio.h>

int main()
{
    //sequencia de operacoes que devem ser realizadas
    //declaro x como inteiro, depois declaro y como inteiro.
    int x, y;
    int result;



    //como a atribuição primeiro avalia o que tem a direita
    //para só depois atribuir ao que está a esquerda,
    //teremos o seguinte resultado atribuido a result
    //40, pois a expressao é avaliada da esqueda p/ direta (->)
    result = (x = 10, y = 30, x + y);
    printf("result = %d\n", result);

    return 0;
}