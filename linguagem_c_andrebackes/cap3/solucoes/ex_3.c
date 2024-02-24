#include <stdio.h>

int main()
{
    int x, y, z, sum;

    printf("type three intergers: ");
    scanf("%d %d %d", &x, &y, &z);

    sum = x + y + z;
    printf("x + y + z = %d\n", sum);

    return 0;
}