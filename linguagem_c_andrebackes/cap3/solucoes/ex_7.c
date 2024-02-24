#include <stdio.h>

#define EXCHANGE_RATE 0.2005978l

int main()
{
    double usd, brl;

    printf("enter an amount in BRL: ");
    scanf("%lf", &brl);

    usd = brl * EXCHANGE_RATE;
    printf("your USD amount is %.4lf\n", usd);

    return 0;
}