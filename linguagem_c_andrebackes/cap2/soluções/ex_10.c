#include <stdio.h>

int main(){
	int dia, mes, ano;

	printf("Digite o dia, mes e ano, respeitando o formato DD/MM/AA: \n");
	scanf("%d/%d/%d", &dia, &mes, &ano);

	printf("Data digitada: %d/%d/%d\n", dia, mes, ano);

	return 0;
}