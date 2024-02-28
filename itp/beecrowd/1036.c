#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C;
    double delta, r1, r2; 
    
    scanf("%lf %lf %lf", &A, &B, &C);

    delta = pow(B, 2) - (4 * A * C);

    if(delta >= 0.0 && A > 0.0)
    {
        r1 = (-B + sqrt(delta))/(2 * A);
        r2 = (-B - sqrt(delta))/(2 * A);

        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }

    return 0;
}