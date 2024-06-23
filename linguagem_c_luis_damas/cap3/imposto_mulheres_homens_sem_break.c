#include <stdio.h>

int main() {
    double taxa = 0.0, salario;
    char genero;

    printf("Digite seu salário: ");
    scanf("%lf", &salario);

    printf("Digite seu gênero: ");
    scanf(" %c", &genero);

    switch(genero) {
        case 'm':
        case 'M': taxa = taxa + .05;
        case 'f':
        case 'F': taxa = taxa + .1;
    }

    printf("Imposto a ser pago: R$%.2lf\n", salario * taxa);
    
    return 0;
}