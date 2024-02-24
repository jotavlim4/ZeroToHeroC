#include <stdio.h>

int main()
{
    int number, u, d, c;

    printf("enter a three digits number ");
    scanf("%d", &number);

    c = number / 100;
    d = (number % 100) / 10;
    u = (number % 100) % 10;

    printf("original number: %d\n", number);
    printf("inverted number: %d%d%d\n", u, d, c);

    return 0;
}