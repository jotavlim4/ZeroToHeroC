#include <stdio.h>

int main()
{
    int x, y;

    printf("type two numbers: ");
    scanf("%d %d", &x, &y);

    if(x > y)
        printf("%d is the biggest!\n", x);
    else 
    if(x == y)
        printf("these numbers are the same\n");
    else
        printf("%d is the biggest!\n", y);

    return 0;
}