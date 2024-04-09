#include <stdio.h>
/*  
    correção baseada na solução do RenanTashiro
    https://github.com/RenanTashiro/URI/blob/85c4d3079211d4b4415798649af8c6ce3be541b8/code/Iniciante/p-level-1/2028.cpp
 */
int main()
{
    int n, test = 1;

    while(scanf("%d", &n) != EOF)
    {
        int count = 0;

        for(int i = 0; i <= n; i++)
        {
            if(i == 0 || i == 1)
            {
                count += 1;
            }
            else
            {
                count += i;
            }
        }

        if(n == 0)
        {
            printf("Caso %d: %d numero\n0", test, count);
        }
        else
        {
            printf("Caso %d: %d numeros\n0", test, count);
        }

        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                printf(" %d", i);
            }
        }

        putchar('\n');
    }
    return 0;
}