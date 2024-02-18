#include <stdio.h>
#include <stdlib.h>

int main()
{
	//declaração da variável
	int x;
	//declarando multiplas variáveis de mesmo tipo
	int y,z;

	//inicializadno uma das variáveis, as outras tem valor "lixo"
	x = 2;

	printf("%d\n%d\n%d\n", x, y, z);
	// agora tem valor
	y = z = 10;

	printf("%d\n%d\n", x, y);

	return 0;

}