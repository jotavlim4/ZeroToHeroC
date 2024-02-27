#include <stdio.h>

int main()
{
    int n;

    printf("enter a positiive integer: ");
    scanf("%d", &n);

    for(int i = n; i >= 0; i--)
        printf("%d\n", i);
    
    return 0;
}
    