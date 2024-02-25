#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, delta;
    double x1, x2;

    printf("type the coeficients of your quadratic equation: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a == 0.0l)
        printf("wrong!\nthat's not a quadratic equation!\a\n");
    else
    {
        delta = (pow(b, 2) - 4 * a * c);

        if(delta > 0)
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("we have two diferents roots:\nx1 = %.2lf and x2 = %.2lf\n", x1, x2);
        }
        else if(delta == 0)
        {
            x1 = (-b) / (2 * a);
            printf("we have two equal roots:\nx1 = x2 = %.2lf\n", x1);
        }
        else
            printf("x ∉ real set\n");
    }
    return 0;
}