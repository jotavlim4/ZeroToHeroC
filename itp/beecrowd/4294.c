#include <stdio.h>

void conversor(int number, int base)
{
    int r, q;
    int remainder[100];
    int count = 0;

    if(number == 0)
        printf("0");
    
    else{
        while(number != 0)
        {
            q = number / base;
            r = number % base;
            
            remainder[count] = r;

            number = q;
            count++;
        }
    }
    
    for(int i = count - 1; i >= 0; i--)
       printf("%d", remainder[i]);
    printf("(%d)\n", base);
}

int main()
{
    int n, b;

    while(1)
    {
        scanf("%d", &n); if(n == -1) break;
        scanf("%d", &b);

        printf("Numero %d(10) na base %d = ", n, b);
        conversor(n, b);
    }
    printf("Programa Encerrado!");
    return 0;
}