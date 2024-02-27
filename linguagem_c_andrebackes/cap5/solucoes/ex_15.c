#include <stdio.h>

int main()
{
    int largest, smallest, number;

    largest = -2147483648;
    smallest = 2147483647;
    while(1)
    {
        scanf("%d", &number);
        if(number < 0)
            break;
        else
        {
            if(number > largest)
            largest = number;
        
            if(number < smallest)
            smallest = number;
        }
    }
    printf("largest = %d\n", largest);
    printf("smallest = %d\n", smallest);

    return 0;
}