#include <stdio.h>

int main()
{
    int largest, smallest, number;

    printf("please enter 10 integer, then press <ENTER>, to see the largest and the smallest.:\n");

    for(int i = 0; i < 10; i++)
    {
        if(i == 0)
        {   
            scanf("%d", &number);
            largest = smallest = number;
        }
        else
        {
            scanf("%d", &number);
            
            if(largest < number)
                largest = number;

            if(smallest > number)
                smallest = number;
        }
    }
    printf("largest number = %d\n", largest);
    printf("smallest number = %d\n", smallest);

    return 0;
}