#include <stdio.h>

#define TAM 10

int main()
{
    double numbers[TAM];

    for(int i = 0; i < TAM; ++i)
    {
        numbers[i] = i * (TAM - i);
        printf("%.1lf\n", numbers[i]);
    }    

    return 0;
}