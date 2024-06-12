#include <stdio.h>

int main() {
	int x;

	printf("Digite um valor inteiro: ");
	scanf("%d", &x);

	if(x != 0) 
		printf("%d não é zero!\n", x);
	else
		printf("%d é nulo!\n", x);

	return 0;

	/*

		Uma forma equivalente a if(x != 0):

		Como x = qualquer coisa menos zero, representa o valor TRUE
		então uma forma equivante de if(x != 0) é simplesmente if(x),

		pois se o valor de x não for zero então ele representa o valor TRUE
		logo if(x) -> TRUE e a linha será executada.

		se x = 0, 0 representa FALSE entao a intrução do if nao será executada
		e sim o ELSE.

	*/
}