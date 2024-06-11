#include <stdio.h>

int main() {
	int num;

	printf("Digite um inteiro: "); scanf("%d", &num);
	printf("O número %d representa '%c' na tabela ASCII\n", num, (char) num);

	printf("Já o número seguinte %d, representa '%c' na tabela ASCII\n", num + 1, (char) (num + 1));

	return 0;
}