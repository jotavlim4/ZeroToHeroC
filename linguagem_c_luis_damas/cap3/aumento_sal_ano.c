#include <stdio.h>

int main() {
    double salario;

    printf("Digite o seu salário: ");
    scanf("%lf", &salario);

    if(salario > 1000)
        salario = salario * 1.04;
    else
        salario = salario * 1.07;

    printf("Novo salário: %.2lf\n", salario);

    return 0;
}