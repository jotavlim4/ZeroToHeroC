#include <stdio.h>

int main() {
	int x;

	printf("Digite um número inteiro: "); scanf("%d", &x);
	if(x >= 0)
		printf("O valor é positivo ou maior que zero\n");
	else
		printf("O valor é negativo\n");

	return 0;
}