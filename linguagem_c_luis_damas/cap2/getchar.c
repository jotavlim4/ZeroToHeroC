#include <stdio.h>

int main() {
	char ch;

	printf("Digite um caracter: ");
	ch = getchar();
	// a função getchar() foi criada especificamente com a finalidade de 
	// ler e armazenar em uma variável um dado do tipo char, um único dado 
	// do tipo char.

	printf("O caracter digitado foi '%c'\n", ch);

	return 0;
}