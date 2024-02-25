#include <stdio.h>
#include <math.h>

int main()
{
    double number;

    printf("type a number: ");
    scanf("%lf", &number);

    if(number > 0)
    {
        printf("*squared = %.1lf\n",pow(number, 2));
        printf("*squared root = %.1lf\n", sqrt(number));
    }
    else
        printf("this is a negative number...please, try again.\n");

    return 0;
}   