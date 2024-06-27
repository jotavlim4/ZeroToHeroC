#include <stdio.h>

double pot(double b, int e) {
    double result = 1.0;

    for(int i = 0; i < e; i++)
        result *= b;
    
    return result;
}

int main() {
    double k = 1.0;

    for(int i = 1; i <= 5; i++)
        for(int j = 1; j <= 10; k++, j++)
            j == 10 ? printf("%5.0lf\n", pot(k, 2)) : printf("%5.0lf ", pot(k, 2));
        

    return 0;
}

