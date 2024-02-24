#include <stdio.h>
#include <math.h>

int main()
{
    double a, b;
    double hypo;

    printf("type the legs of triangle ");
    scanf("%lf %lf", &a, &b);

    hypo = sqrt(pow(a, 2) + pow(b, 2));

    printf("the triangle has hypotenuse equal to %lf\n", hypo);

    return 0;    
}