#include <stdio.h>

int main()
{
    double payment, installment;

    printf("please, type your payment and the desired installment: ");
    scanf("%lf %lf", &payment, &installment);

    if(installment < 0.2 * payment)
        printf("loan granted\n");
    else
        printf("loan not granted\n");

    return 0;
}