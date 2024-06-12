#include <stdio.h>

int main(){
	double x;

	printf("Digite um número real: "); scanf("%lf", &x);

	printf("A parte inteira desse número é %d\n", (int) x);
	printf("A parte fracionária desse número é %.1lf\n", x - ((int) x));

	//uma forma manual de fazer essa divisao é subtrair do número
	//a parte inteira atraves do casting do número para int.

	//esse casting pega apenas a parte inteira do número real e ignora
	//a parte fracionaria.

	return 0;
}