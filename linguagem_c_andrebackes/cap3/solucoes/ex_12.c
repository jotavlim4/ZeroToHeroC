#include <stdio.h>

#define PI 3.141493

int main()
{
    float height, radius;
    float volume;

    printf("please, type the height and radius of cylinder ");
    scanf("%f %f", &height, &radius);

    volume = (radius * radius) * PI * height;

    printf("the cylinder volume is %f\n", volume);

    return 0;
}