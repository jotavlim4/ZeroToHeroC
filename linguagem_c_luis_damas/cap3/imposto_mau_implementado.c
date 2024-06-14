#include <stdio.h>

int main()
{
    double salario;

    printf("Digite o valor do salário: ");
    scanf("%lf", &salario);

    if(salario <= 0.0)
        printf("Valor inválido!\n");
    
    if(salario > 1000.0)
        printf("Imposto = %.2lf\n", salario * 0.1);
    else
        printf("Imposto = %.2lf\n", salario * 0.05);

    return 0;    
}