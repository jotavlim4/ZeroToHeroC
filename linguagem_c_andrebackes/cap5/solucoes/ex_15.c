#include <stdio.h>

#define MIN_INT -2147483648
#define MAX_INT 2147483647

int main()
{
    int largest, smallest, number;

    largest = MIN_INT;
    smallest = MAX_INT;
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