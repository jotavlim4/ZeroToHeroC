#include <stdio.h>

int gdc(int num1, int num2)
{
    if(num2 == 0)
        return num1;
    else
        return gdc(num2, num1 % num2);
}

int main()
{
    int x, y;
    
    while(scanf("%d %d", &x, &y) != EOF)
        printf("MDC(%d , %d) = %d\n", x, y, gdc(x, y));
    
    return 0;
}