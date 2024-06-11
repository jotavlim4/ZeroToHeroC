#include <stdio.h>

int main() {
	char ch;

	printf("Digite um caracter: "); scanf("%c", &ch);
	printf("O caracter digitado foi: '%c'\n", ch);
	//nesse caso as aspas simples foram utilizadas apenas com a finalidade
	//de escrever o caracter lido entre aspas simples.
	//o uso nao foi exigido pela função printf.
	//na função printf as aspas simples podem ser usadas sem restrição alguma.

	return 0;
}