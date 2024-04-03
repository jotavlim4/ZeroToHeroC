#include <stdio.h>

int is_prime(int number)
{
    if(number <= 1)
        return 0;
    else
    {
        for(int i = 2; i * i <= number; i++)
        {
            if(number % i == 0 )
                return 0;    
        }
    }
    return 1;

}

int main()
{
    int number;
    
    while(scanf("%d", &number) != EOF)
    {
        if(is_prime(number) && is_prime(number + 2))
            printf("Numero forma par de gemeos\n");
        else
            printf("Numero nao forma par de gemeos\n");
    }
    return 0;
}