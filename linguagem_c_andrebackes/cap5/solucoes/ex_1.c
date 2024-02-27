#include <stdio.h>

int main()
{
    int n;

    printf("enter a positiive integer: ");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++)
        printf("%d\n", i);
    
    return 0;
}
    