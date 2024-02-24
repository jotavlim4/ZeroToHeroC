#include <stdio.h>

int main()
{
    int x, y;
    int xor, or, and;

    printf("enter two integers numbers: ");
    scanf("%d %d", &x, &y);

    xor = x ^ y;
    or  = x | y;
    and = x & y;

    printf("XOR = %d\n", xor);
    printf("OR  = %d\n", or);
    printf("AND = %d\n", and);

    return 0;
}