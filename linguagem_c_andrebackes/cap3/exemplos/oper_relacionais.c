#include <stdio.h>

int main()
{
    int x = 5;
    int y = 3;
    int result;

    result = x > y;
    printf("x > y? %d\n", result);

    result = x < y;
    printf("x < y? %d\n", result);

    result = x >= y;
    printf("x >= y? %d\n", result);

    result = x <= y;
    printf("x <= y? %d\n", result);

    result = x == y;
    printf("x == y? %d\n", result);

    result = x != y;
    printf("x != y? %d\n", result);

    return 0;
}