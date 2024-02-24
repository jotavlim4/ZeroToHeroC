#include <stdio.h>

int main()
{
    float x, y, result;

    x = 10.0;
    y = 3.0;

    result = x / y;
    printf("divisao real = %f\n", result);

    //type casting -> conversao explícita
    result = (int) (x / y);
    printf("divisao inteira = %f\n", result);

    return 0;    
}