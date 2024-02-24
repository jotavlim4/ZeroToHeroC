#include <stdio.h>

#define QTD_NUM 4.0

int main()
{
    float x, y, z, w;
    float average;

    printf("enter 4 real numbers: ");
    scanf("%f %f %f %f", &x, &y, &z, &w);

    average = (x + y + z + w) / QTD_NUM;

    printf("average of this numbers is %f\n", average);

    return 0;    
}