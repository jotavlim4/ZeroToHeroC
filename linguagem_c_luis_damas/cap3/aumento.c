#include <stdio.h>

int main() {
	double salario_atual;

	printf("Qual é o salário atual: ");
	scanf("%lf", &salario_atual);

	if(salario_atual < 100000.0)
		salario_atual = salario_atual + 1000.0;
	
	printf("Salário final: R$%.2lf,00\n", salario_atual);


	return 0;
}