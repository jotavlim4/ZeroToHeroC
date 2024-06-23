#include <stdio.h>

int main(){
    double salario;

    printf("Digite o seu salário: ");
    scanf("%lf", &salario);

    salario = salario > 1000 ? salario * 1.04 : salario * 1.07;

    printf("Novo salário: %.2lf\n", salario);

    return 0;
}