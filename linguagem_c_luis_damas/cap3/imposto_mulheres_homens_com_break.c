#include <stdio.h>

int main() {

    double salario, imposto = 0.0;
    char sexo;

    printf("Digite seu salário: ");
    scanf("%lf", &salario);
    printf("Digite o sexo: ");
    scanf(" %c", &sexo);

    switch(sexo) {
        case 'm':
        case 'M': imposto = 0.15; break;
        case 'f':
        case 'F': imposto = 0.1; break;
        default: printf("Sexo inválido!\n");
    }

    printf("Imposto a ser pago: R$%.2lf\n", salario * imposto);

    return 0;
}