#include <stdio.h>

int main()
{
    int x, y;
    int left_shift, right_shift;

    printf("type two integers numbers: ");
    scanf("%d %d", &x, &y);

    left_shift = x << y;
    right_shift = x >> y;

    printf("left shift = %d\n", left_shift);
    printf("right shift = %d\n", right_shift);

    return 0;
}