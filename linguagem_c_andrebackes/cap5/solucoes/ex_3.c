#include <stdio.h>

int main()
{
    int n, i;

    printf("enter a integer: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("%d°: %d\n", i + 1, (2 * i) + 1);
    }
    return 0;
}