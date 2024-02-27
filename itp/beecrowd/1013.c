#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int largest_ab, largest_ac;

    scanf("%d %d %d", &a, &b, &c);

    largest_ab = (a + b + abs(a - b)) / 2;
    largest_ac = (largest_ab + c + abs(largest_ab - c))/ 2;

    printf("%d eh o maior\n", largest_ac);

    return 0;
}