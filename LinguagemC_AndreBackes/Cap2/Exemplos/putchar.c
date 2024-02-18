#include <stdio.h>

int main()
{
	int x = 65; //65 = A na tabela ASCII.
	int i = 127 //27 = <DEL> na tabela ASCII, nao imprimivel, 
				//putchar retornará um espaço em branco
	char ch = 'c';

	/* 
	 * Quando escrevemos um inteiro como paramentro, 
	 * a funcao converse ele para char se for um caracter imprimivel,
	 * se nao for, putchar retornará um espaço em branco
	 */
	putchar(x);
	putchar('\n');

	/* 
	 * Apesar de exigir um inteiro como paramentro,
	 * podemos passar diretamente um char pois o compilador entende
	 * char como inteiro .
	 */
	putchar(ch);
	putchar('\n');

	return 0;


}