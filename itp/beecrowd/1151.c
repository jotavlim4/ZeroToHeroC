#include <stdio.h>

int main()
{
    int a, b, next;
    int n;

    scanf("%d", &n);

    a = 0;
    b = 1;

    printf("%d ", a);
    printf("%d ", b);

    for(int i = 2; i < n; i++){
        next = a + b;

        a = b;
        b = next;

        i == n - 1 ? printf("%d\n", next) : printf("%d ", next);
    }

    return 0;
}