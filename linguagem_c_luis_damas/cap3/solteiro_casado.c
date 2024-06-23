#include <stdio.h>

int main() {
    double salario;
    char estado_civil;

    printf("Digite o seu salário: ");
    scanf("%lf", &salario);

    printf("Digite o seu estado civil: ");
    scanf(" %c", &estado_civil);

    if(estado_civil == 'C' || estado_civil == 'c')
        printf("Imposto: %.2lf\n", salario * 0.09);
    else
        if(estado_civil == 'S' || estado_civil == 's')
            printf("Imposto: %.2lf\n", salario * 0.1);
        else
            printf("Estado civil incorreto!\n");

return 0;

}