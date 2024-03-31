#include <stdio.h>

double total_orders(int c, int q);

int main()
{
    int quantity, orders, code;
    double sum;

    scanf("%d", &orders);

    sum = 0.0;
    for(int i = 0; i < orders; i++)
    {
        scanf("%d %d", &code, &quantity);

        sum += total_orders(code, quantity);
    }

    printf("%.2lf\n", sum);

    return 0;
}

double total_orders(int c, int q)
{
    double s;

    s = 0;
    switch(c)
    {
        case 1001:
            s = 1.5 * q;
            break;
        case 1002:
            s = 2.5 * q;
            break;
        case 1003:
            s = 3.5 * q;
            break;
        case 1004:
            s = 4.5 * q;
            break;
        case 1005:
            s = 5.5 * q;
            break;
    }

    return s;
}

