#include <stdio.h>

int main()
{
    //lembrando que podemos fazer multiplas declaracoes
    int x, y, z;
    //também podemos fazer multiplas atribuições
    //o valor '10' é lido e armazenado em 'z', 
    //o valor de 'z' é armazenado em 'y'
    //o valor de 'y' é armazenado em 'x'
    
    //sempre da direita para esquerda (<-)
    x = y = z = 10;

    printf("x = y = z = %d\n", x);

    return 0;
}