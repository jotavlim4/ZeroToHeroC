#include <stdio.h>

int main()
{
    double salario;

    printf("Digite o salario: ");
    scanf("%lf", &salario);

    if(salario <= 0)
        printf("Valor inválido!\n");

    //esse desvio da execução só ocorre quando o salario é maior que zero
    //logo não existe a possibilidade de imposto negativos nessa versão do programa.
    else
        if(salario > 1000)
            printf("Imposto = %.2lf\n", salario * 0.1);
        else
            printf("Imposto = %.2lf\n", salario * 0.05);

    return 0;
}