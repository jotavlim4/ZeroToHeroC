#include <stdio.h>

#define PI 3.14159

int main()
{
    double radius, volume;

    scanf("%lf", &radius);

    volume = (4.0 / 3) * PI * (radius * radius * radius);

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}