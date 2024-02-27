#include <stdio.h>

int main()
{
    int count;
    double average, number;

    printf("enter 10 integer, then press <ENTER>, to see the average.:\n");

    count = 0;
    average = 0.0;
    while(count != 10)
    {
        scanf("%lf", &number);
        if(number < 0.0l)
        {
            printf("please, enter a positive integer...\n");
            continue;
        }
        else
        {
            average += number;
            count++;
        }
    }
    printf("the average of the entered numbers is %.2lf\n", average / 10.0);
    
    return 0;
}