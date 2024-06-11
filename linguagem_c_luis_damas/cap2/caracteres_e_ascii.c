#include <stdio.h>

int main() {
	char ch;

	printf("Digite um caracter: "); scanf(" %c", &ch);
	printf("O caracter '%c' tem o seguinte código ASCII: %d\n", ch, ch);
	//existe uma relação entre os números de [-128, 127]
	//cada número inteiro nesse intervalo representa um simbola da tabela ascii.

	return 0;
}