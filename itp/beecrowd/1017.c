#include <stdio.h>

int main()
{
    int time, vel;
    double consumption;

    scanf("%d %d", &time, &vel);

    consumption = (time * vel) / 12.0;

    printf("%.3lf\n", consumption);

    return 0;
}