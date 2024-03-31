#include <stdio.h>

int is_divisor(int num, int divisor)
{
    if(num % divisor == 0)
        return 1;
    else
        return 0;
}

int sum_divisors(int value)
{
    int sum = 0;

    for(int i = 1; i < value; i++)
    {
        if(is_divisor(value, i))
            sum += i;
    }
    return sum;
}

int is_perfect(int num)
{
    if(num > 0)
    {    
        if(sum_divisors(num) == num)
            return 1;
        else
            return 0;
    }
}

int main()
{
    int number;

    while(scanf("%d", &number) != EOF)
    {
        if(is_perfect(number))
            printf("Perfeito");
        else
            printf("Não perfeito");
    }
    return 0;
}