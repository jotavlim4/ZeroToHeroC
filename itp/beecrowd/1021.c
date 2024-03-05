#include <stdio.h>

int main()
{
    double number, coin;
    int q, r;
    int brl[6] = {100, 50, 20, 10, 5, 2};
    int coins[6] = {100, 50, 25, 10, 5, 1};
    int qtd_brl[6];

    
    scanf("%lf", &number);

    coin = number - (int) number;

    printf("NOTAS:\n");
    for(int i = 0; i < 6; i++)
    {
        q = (int) number / brl[i];
        r = (int) number % brl[i];

        qtd_brl[i] = q;
        number = r;
        printf("%d nota(s) de R$ %d.00\n", qtd_brl[i], brl[i]);
    }

    number = (number +  coin) * 100;

    printf("MOEDAS:\n");
    for(int i = 0; i < 6; i++)
    {
        q = (int) number / coins[i];
        r = (int) number % coins[i];

        qtd_brl[i] = q;
        number = r;
        
        if(i == 0)
        {
            printf("%d moeda(s) de R$ %d.00\n", qtd_brl[i], coins[i] / 100);
        }
        else if(i > 0 && i < 4)
        {
            printf("%d moeda(s) de R$ 0.%d\n", qtd_brl[i], coins[i]);
        }
        else
        {
            printf("%d moeda(s) de R$ 0.0%d\n", qtd_brl[i], coins[i]);
        }
    }
    
    return 0;
 }