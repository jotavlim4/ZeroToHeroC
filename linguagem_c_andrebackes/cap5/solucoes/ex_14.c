#include <stdio.h>

int main()
{
    int a, b, n, next;

    a = 0;
    b = 1;
    
    scanf("%d", &n);

    if(n == 0)
    {
        printf("%d\n", a);
    }
    else if(n == 1)
    {  
        printf("%d\n", b);
    }
    else
    {
        for(int i = 2; i <= n; i++)
        {   
            next = a + b;

            a = b;
            b = next;
        }
        printf("%d\n", next);
    }
    return 0;
}