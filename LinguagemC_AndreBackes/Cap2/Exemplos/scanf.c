#include <stdio.h>
#define TAM 10


int main()
{
	int a;
	float b;
	double c;
	char d;
	char e[TAM];

	scanf("%d\n", &a); //le inteiro e armazena em a
	scanf("%f\n", &b); //le float e armazena em b
	scanf("%lf\n", &c); //le double e armazena em c
					 //usando %f para double levanta um warning do compilador
					 //devemos usar %lf 
	scanf("%c\n", &d); //le um char e armazena em d
	scanf("%s", e); // le uma sequencia de caracteres e armazena em vetor de char

	printf("%d\n", a);
	printf("%f\n", b);
	printf("%lf\n", c);
	printf("%c\n", d);

	for(int i = 0; i < 4; i++){
		printf("%c", e[i]);
	}
	putchar('\n');

	return 0;
}