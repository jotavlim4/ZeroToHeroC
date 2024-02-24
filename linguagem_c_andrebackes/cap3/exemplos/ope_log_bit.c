#include <stdio.h>

int main()
{
    int x = 5;
    int y = 10;
    int r;

    //END bit a bit:
    //posicoes de bit iguais, retornam 1
    //posicoes de bit diferentesm retoram 0
    r = x & y; 
    printf("r = %d\n", r);
    //OR bit a bit:
    //posices de bit que tiverem 1, retoram 1,
    //caso contrario, retornam 0;
    r = x | y;
    printf("r = %d\n", r);
    //XOR bit a bit:
    //posices de bit que forem diferentes, retornam 1,
    //se forem igauis retornam 0;
    r = x ^ y;
    printf("r = %d\n", r);

    return 0;
}