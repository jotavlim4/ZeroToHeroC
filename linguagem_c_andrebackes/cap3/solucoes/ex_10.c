#include <stdio.h>

#define PRIZE 780000

int main()
{
    double first_w, second_w, third_w;
    
    first_w = PRIZE * 0.46l;
    second_w = PRIZE * 0.32l;
    third_w = PRIZE - first_w - second_w;

    printf("first winner: %lf\n", first_w);
    printf("second winner: %lf\n", second_w);
    printf("third winner: %lf\n", third_w);
    printf("total: %lf\n", first_w + second_w + third_w);

    return 0;    
}