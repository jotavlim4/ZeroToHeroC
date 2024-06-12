#include <stdio.h>

int main() {
	char ch1 = 'X', ch2 = 'Y';

	printf("Digite um inteiro: "); scanf("%d", &ch2);
	printf("O valor de ch1 é '%c' e o valor de ch2 é '%c'\n", ch1, ch2);

	return 0;
/*

O QUE OCORRE:

ao declararmos e inicializarmos ch1 e ch2 com 'X' e 'Y' respectivamente
os seguintes padroes de bits foram criados na memoria:

0101 1000 -> X
0101 1001 -> Y

quando atribuimos o valor inteiro 16706 (0100 0001 0100 0010) a variável
ch2 o que ocorre é estamos atribuindo um valor que é superior ao 
espaco reservado para ch2(8 bits = 1 byte), logo ocorrerá vazamento de
memóra e isso alterará o espaco de memória adjancente ao que está 
reservado para ch2. o que nesse exemplo era exatamente ch1. isso ocorre
pois quando fazemos a leitura do inteiro pelo scanf, ele vai alterar na 
variável passada o bits correspondes ao tamanho de um inteiro. logo ele
altera 4 bytes consecutivos para que correspondam ao valor lido.

entao ch1 e ch2 ficariam:

0100 0001 -> ch1 -> 65 -> 'A' (primeiro byte do inteiro lido - mais a direita)
0100 0010 -> ch2 -> 66 -> 'B' (segundo byte do inteiro lido)

*/

}