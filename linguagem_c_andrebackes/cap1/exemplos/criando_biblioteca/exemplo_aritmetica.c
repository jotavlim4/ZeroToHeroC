#include <stdio.h>
#include <stdlib.h>
#include "aritmetica.h"

int main()
{
	int x, y, z;
	char ch;

	printf("Digite uma operação matemática (+, -, *, /): \n");
	ch = getchar();

	printf("Digite dois números: \n");
	scanf("%d %d", &x, &y);

	switch(ch)
	{
		case '+': z = soma(x, y); break;
		case '-': z = diferenca(x, y); break;
		case '*': z = multiplicacao(x, y); break;
		case '/': z = divisao(x, y); break;
		default: printf("Operação inválida!\n"); break;
	}

	printf("Resultado: %d\n", z);
	
	return 0;
}
