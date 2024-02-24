#include <stdio.h>

int main()
{
    int q;
    float q_real;

    //vai retornar apenas a parte inteira da divisao de 5 por 4
    q = 5 / 4;
    //vai retornar a divisao exata (até o resto ser zero) 
    q_real = 5.0 / 4.0;

    printf("divisao inteira = %d\n", q);
    printf("divisao real = %f\n", q_real);

    return 0;
}