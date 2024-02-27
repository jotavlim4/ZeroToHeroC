#include <stdio.h>

int main()
{
    double average, number;

    printf("please, enter 10 number, the press <ENTER> to see the average.:\n");

    average = 0.0;
    for(int i = 0; i < 10; i++)
    {
        scanf("%lf", &number);
        average += number;
    }
    printf("the average of the entered numbers is %.2lf\n", average / 10.0);
    
    return 0;
}