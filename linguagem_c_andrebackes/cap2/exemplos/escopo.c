#include <stdio.h>

int x = 1; //escopo global

int main()
{ //escopo local funcao main
	printf("%d\n", x); //escreve 1 na tela 

	{ // inicio escopo local
		int x = 2;  

		printf("%d\n", x); //escreve 2 na tela, ocultou o valor x = 1

		{ //inicio escopo local aninhado

			int x = 3; 
			printf("%d\n", x); //escreve 3 na tela, ocultou o valor x = 2
		} // fim escopo local aninhado

		printf("%d\n", x); //escreve 2 na tela, voltou para escopo onde x = 2
	} // fim escopo local

	printf("%d\n", x); //escreve 1 na tela, voltou para o escopo onde x = 1

	return 0;
} //fim escopo local funcao main