#include <stdio.h>

int main()
{
    int x, y;

    printf("enter a integer number: ");
    scanf("%d", &x);

    y = ~x;

    printf("x = %d\n", x);
    printf("~x = %d\n", y);

    return 0;
}