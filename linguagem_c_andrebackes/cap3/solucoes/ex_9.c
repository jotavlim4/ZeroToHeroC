#include <stdio.h>

#define PI 3.141592l

int main()
{
    double degree, radians;

    printf("type a angle in degree ");
    scanf("%lf", &degree);

    radians = degree * (PI / 180.0l);
    printf("this angle in rad is %lf\n", radians);

    return 0;
}
