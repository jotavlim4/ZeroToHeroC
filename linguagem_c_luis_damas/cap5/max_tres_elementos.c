#include <stdio.h>

#define MIN -2147483648

double max(double x, double y, double z) {
    double maior = MIN;

    if(x > maior)
        maior = x;
    
    if(y > maior)
        maior = y;

    if(z > maior)
        maior = z;

    return maior;
}

int main() {
    double a, b, c;

    printf("Digite tres números: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("O maior deles é %.2lf\n", max(a, b, c));

    return 0;
}