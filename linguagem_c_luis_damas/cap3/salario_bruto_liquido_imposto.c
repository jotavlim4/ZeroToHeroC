#include <stdio.h>

int main()
{
    double salario, taxa;

    printf("Qual é o salário: ");
    scanf("%lf", &salario);

    if(salario < 1000)
        taxa = .05;
    else if(1000 <= salario && salario < 5000)
        taxa = .14;
    else
        taxa = .35;
    
    printf("Salário: %.2lf\n", salario);
    printf("Imposto: %.2lf\n", salario * taxa);
    printf("Salário líquido: %.2lf\n", salario - (salario * taxa));

    return 0;
}