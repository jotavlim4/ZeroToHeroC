#include <stdio.h>

int main()
{
    unsigned char x, y;

    x = 44;

    // X << N corresponde a X * (2^N)
    y = x << 2;
    //176
    printf("left shift = %d\n", y);

    // x >> N corresponde a X / (2^n)
    y = x >> 2;
    //11
    printf("right shift = %d\n", y);

    return 0;
}