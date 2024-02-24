#include <stdio.h>

int main()
{
    int x, y;

    x = 10;
    y = 12;

    //corresponde a x = x + y; 
    //22
    x += y;
    printf("x = %d\n", x);

    /* 
     * x += y; -> x = x + y;
     * x -= y; -> x = x - y;
     * x *= y; -> x = x * y;
     * x /= y; -> x = x / y;
     * x %= y; -> x = x % y;
     * ...
     */
    return 0;
}