#include <stdio.h>

int main()
{
    int n;

    printf("please, enter a integer: ");
    scanf("%d", &n);

    printf("sucessor: %d\n", n + 1);
    printf("predecessor: %d\n", n - 1);

    return 0;
}