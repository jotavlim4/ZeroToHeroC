#include <stdio.h>

int main()
{
    int number, i;

    printf("enter integers, then press <ENTER>, to see its divisors.: ");
    scanf("%d", &number);

    printf("D(%d) = {", number);
    
    i = 1;
    while(i <= number)
    {
        if(number % i == 0)
        {
            i == number ? printf("%d}\n", i) : printf("%d, ", i) ;
        }
        i++;
    }
    return 0;    
}