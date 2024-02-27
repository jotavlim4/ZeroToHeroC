#include <stdio.h>

#define PI 3.14159
int main()
{
    double A, B, C;
    double triangle, circle, trapeze, square, rectangle;

    scanf("%lf %lf %lf", &A, &B, &C);

    triangle = (A * C) / 2;
    circle = PI * (C * C);
    trapeze = (A + B) * C / 2;
    square = B * B;
    rectangle = A * B;

    printf("TRIANGULO: %.3lf\n", triangle);
    printf("CIRCULO: %.3lf\n", circle);    
    printf("TRAPEZIO: %.3lf\n", trapeze);
    printf("QUADRADO: %.3lf\n", square);
    printf("RETANGULO: %.3lf\n", rectangle); 

    return 0;
}