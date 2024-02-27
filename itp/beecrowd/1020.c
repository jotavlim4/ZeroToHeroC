#include <stdio.h>

int main()
{
   int age, d, m, y;

   scanf("%d", &age);

    y = age / 365;
    m = (age % 365) / 30;
    d = (age % 365) % 30;

    printf("%d ano(s)\n", y);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", d);

    return 0;
}