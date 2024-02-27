#include <stdio.h>

int main()
{
    int sum, i;

    sum = 0;
    for(i = 1; i <= 50; i++)
    {
        sum = sum + (2 * i);
    }
    printf("sum = %d\n", sum);
    
    return 0;
}