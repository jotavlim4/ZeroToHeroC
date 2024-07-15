#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMS 49
#define MIN_APOSTA 6
#define NUM_LIN 7

void start_random()
{
    long ultime;

    time(&ultime);
    srand((unsigned) ultime);
}

void start(int *v)
{
    for(int i = 0; i < NUMS; i++)
        v[i] = 0;
}

int read_num_bets()
{
    int n;

    do
    {
        printf("Quantos números deseja apostar (0 - Finalizar): ");
        scanf("%d", &n);
    } while ((n < MIN_APOSTA || n > NUMS) && n != 0);

    return n;
    
}

void generate(int *v, int n)
{
    int i, index;

    for(int i = 1; i <= n; i++)
    {
        index = rand() % NUMS;

        if(v[index] == 0)
            v[index] = 1;
        else
            i--;
    }
}

void show(int *res)
{
    int i;

    for(i = 0; i < NUMS; i++)
    {
        if(res[i] == 0)
            printf(" %2d", i + 1);
        else
            printf(" **");
        
        if((i + 1) % NUM_LIN == 0)
            putchar('\n');
    }
    putchar('\n');
}


int main()
{
    int vector[NUMS];
    int n_numbers;

    start_random();
    while(1)
    {
        start(vector);
        if((n_numbers = read_num_bets()) == 0) break;
        generate(vector, n_numbers);
        show(vector);
    }
    
    return 0;
}


