#include <stdio.h>

int main() {
	int num = 1000;

	printf("Digite um caracter: "); scanf("%c", &num);
	printf("O valor %d representa o seguinte simbolo '%c'\n", num, (char) num);

	//1000 em binario é 0000 0000 0000 0000 0000 0011 1110 1000 (int 4bytes)
	//A é representa por 65 que em binario é 0100 0001

	//ao passarmos a letra para o variavel num declara como int e inicializada
	//1000, o byte mais a direita será modificado com o valor 0100 0001, logo
	//num terá o valor 0000 0000 0000 0000 0000 0011 0100 0001 	que corresponde a
	//833

	//quando fazemos o casting de num para char, vamos considerar apenas o primeiro
	//byte 0100 0001 por essa razao o valor impresso é correto.

	return 0;
}