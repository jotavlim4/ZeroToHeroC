#include <stdio.h>

int main()
{
    int number, sum, i;

    printf("enter a integer: ");
    scanf("%d", &number);

    i = 1;
    sum = 0;
    while(i != number)
    {
        if(number % i == 0)
        {
            sum += i;
        }
        i++;
    }
    printf("the sum os the divisors of %d is %d.\n", number, sum);

    return 0;
}