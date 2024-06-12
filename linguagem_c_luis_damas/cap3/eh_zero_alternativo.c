#include <stdio.h>

int main() {
	int x;

	printf("Digite um número inteiro: ");
	scanf("%d", &x);

	if(x)
		printf("Não é nulo!\n");
	else
		printf("É nulo!\n");

	return 0;
}