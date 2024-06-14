#include <stdio.h>

int main()
{
    double salario;

    printf("Digite o valor do salário: ");
    scanf("%lf", &salario);

    //testa se o valor é zero ou negativo
    if(salario <= 0.0)
        printf("Valor inválido!\n");
    
    //testa se o salario é maior que 1000
    if(salario > 1000.0)
        printf("Imposto = %.2lf\n", salario * 0.1);
    //executa a linha 19 caso o salario seja menor que 1000
    //logo independetemente do valor do salario ser negativo
    //o imposto ainda assim vai ser calculado.
    //precisamos corrigir para que o imposto seja calculado apenas
    //quando o salario nao for negativo.
    else
        printf("Imposto = %.2lf\n", salario * 0.05);

    return 0;    
}