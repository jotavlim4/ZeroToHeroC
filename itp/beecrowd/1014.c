#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int dist;
    double consumption, average;

    scanf("%d %lf", &dist, &consumption);

    average = dist / consumption;

    printf("%.3lf km/l\n", average);

    return 0;
}