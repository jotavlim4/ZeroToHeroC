#include <stdio.h>

int main()
{
    int number;

    printf("please, enter a integer: ");
    scanf("%d", &number);

    if(number % 5 == 0 || number % 3 == 0)
    {
        if(number % 15 != 0)
            printf("%d is divisible by 5 OR 3, but not by 5 AND 3\n", number);
        else
            printf("%d is divisible by 5 AND 3\n", number);
    }
    else
        printf("try again... \n");
    
    return 0;
}