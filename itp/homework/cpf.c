#include <stdio.h>

int main()
{

	int d1, d2, d3, d4, d5, d6, d7, d8, d9;
	int first, second, sum, r;

	printf("entre com os 9 primeiros digitos do seu cpf (digite um número e então pressione <ENTER>):\n");
	scanf("%d%d%d%d%d%d%d%d%d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9);

	sum = (d1 * 10) + (d2 * 9) + (d3 * 8) + (d4 * 7) + (d5 * 6) + (d6 * 5) + (d7 * 4) + (d8 * 3) + (d9 * 2);
	r = sum % 11;
	first = 11 - r;

	sum = (d2 * 10) + (d3 * 9) + (d4 * 8) + (d5 * 7) + (d6 * 6) + (d7 * 5) + (d8 * 4) + (d9 * 3) + (first * 2);
	r = sum % 11;
	second = 11 - r;

	printf("dígito 1 = %d\n", first);
	printf("dígito 2 = %d\n", second);

	return 0;
}