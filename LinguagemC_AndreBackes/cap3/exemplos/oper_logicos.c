#include <stdio.h>

int main()
{
    int r, x, y;
    x = 10;
    y = 20;

    r = x < y && x != y;
    printf("x < y && x != y: %d\n", r); //true

    r = x > y || x == y;
    printf("x > y || x == y: %d\n", r); //false

    r = !(x > y || x == y);
    printf("!(x > y || x == y): %d\n", r); //true

    return 0;
}