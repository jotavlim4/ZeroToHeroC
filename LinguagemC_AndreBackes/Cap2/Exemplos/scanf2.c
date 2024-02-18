#include <stdio.h>

int main(){
	int dia, mes, ano;

	printf("Digite dia, mes e ano, respeitando o formato DD/MM/AAAA: \n");
	scanf("%d/%d/%d", &dia, &mes, &ano);

	printf("A data digitada foi: %d/%d/%d\n", dia, mes, ano);

	return 0;
}