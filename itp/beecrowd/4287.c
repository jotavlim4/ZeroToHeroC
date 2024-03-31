#include <stdio.h>

int is_divisor(int num, int divisor)
{
    if(num % divisor == 0)
        return 1;
    else
        return 0;
}

int sum_divisor(int value)
{   
    int sum;

    sum = 0;
    for(int i = 1; i < value; i++){
        if(is_divisor(value, i))
            sum += i;
    }
    return sum;
}

int is_friend(int num1, int num2)
{
    if(num1 != num2)
    {
        if(sum_divisor(num1) == num2 && sum_divisor(num2) == num1)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}

int main()
{
    int a, b;
    int c, d;
    int friend;

    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);


    for(int i = a; i <= b; i++)
    {
        for(int j = c; j <= d; j++)
        {
            if(is_friend(i, j))
            {
                printf("O %d possui um amigo!\n", i);
                friend++;
            }
        }
    }
    if(friend == 0)
        printf("Os intervalos nao apresentam amigos!");
    
    return 0;
}