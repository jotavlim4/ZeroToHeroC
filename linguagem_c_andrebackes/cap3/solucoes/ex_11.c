#include <stdio.h>

#define PI 3.141593

int main()
{
    float radius, area;

    printf("enter the radius of circle: ");
    scanf("%f", &radius);

    area = radius * radius * PI;
    printf("the circle area is %f\n", area);

    return 0;
}