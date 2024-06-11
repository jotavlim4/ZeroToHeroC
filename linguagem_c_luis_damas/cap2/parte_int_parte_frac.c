#include <stdio.h>

int main(){
	double x;

	printf("Digite um número real: "); scanf("%lf", &x);

	printf("A parte inteira desse número é %d\n", (int) x);
	printf("A parte fracionária desse número é %.1lf\n", x - ((int) x));

	return 0;
}