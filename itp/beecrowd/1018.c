#include <stdio.h>

int main()
{
    int number, q, r;
    int brl[7] = {100, 50, 20, 10, 5, 2, 1};
    int qtd_brl[7];
    
    scanf("%d", &number);

    printf("%d\n", number);

    for(int i = 0; i < 7; i++)
    {
        q = number / brl[i];
        r = number % brl[i];

        qtd_brl[i] = q;
        number = r;
        printf("%d nota(s) de R$ %d,00\n", qtd_brl[i], brl[i]);
    }

    return 0;
 }