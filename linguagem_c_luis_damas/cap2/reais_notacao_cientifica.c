#include <stdio.h>

int main() {
	double quilos = 1.0E3; 
	double grama = 1.0e6;
	double toneladas;
	//'E' ou 'e', tanto faz, tem o mesmo resultado.

	printf("Quantas toneladas você comprou? "); scanf("%lf", &toneladas);
	printf("O valor em quilos foi %lf = %e\n", quilos * toneladas, quilos * toneladas);
	printf("O valor em gramas foi %lf = %E\n", grama * toneladas, grama * toneladas);
	//é importante usar o formatador correto:
	//%f para float
	//%lf para double
	//caso contrário o programa pode apresentar erros

	return 0;
}