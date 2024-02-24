#include <stdio.h>

int main()
{
    float C, F;

    printf("type an temperature in Celsius: ");
    scanf("%f", &C);

    F = C * (9.0 / 5.0) + 32;
    printf("%.1f °C in fahrenheit is %.1f\n", C, F);

    return 0;
}