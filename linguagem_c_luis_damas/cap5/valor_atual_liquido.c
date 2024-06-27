#include <stdio.h>
double pot(double b, int e) {
    double result = 1.0;

    for(int i = 0; i < e; i++)
        result *= e;
    
    return result;
}

double val(double x, int n, double t) {
    int result = 0;

    for(int i = 1; i <= n; i++)
        result = result + (x / pot(t + 1, i));

    return result;
}


int main() {
    double a, b, c;

    a = val(500.00, 2, 1.0);
    b = val(500.00, 4, 1.0);
    c = val(500.00, 6, 1.0);

    printf("%5.2lf\n", a);
    printf("%5.2lf\n", b);
    printf("%5.2lf\n", c);

    return 0;
}