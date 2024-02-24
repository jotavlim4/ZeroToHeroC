#include <stdio.h>

int main()
{
    unsigned char x, y;

    x = 44;
    //troca todos os bits pelo seu oposto
    //0 -> 1
    //1 -> 0
    y = ~x;

    printf("valor de x: %d\n", x);
    printf("valor de ~x: %d\n", y);

    return 0;
}