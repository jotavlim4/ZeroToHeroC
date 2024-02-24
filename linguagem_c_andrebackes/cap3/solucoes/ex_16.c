#include <stdio.h>

int main()
{
    int number;
    int mult, div;

    printf("type a integer number: ");
    scanf("%d", &number);

    mult = number << 1;
    div = number >> 1;

    printf("right shift (x) = %d\n", mult);
    printf("left shift (/)= %d\n", div);

    return 0;
}