#include <stdio.h>

int main() {
	float radius, per;
	double pi = 3.1415927, area;

	printf("Digite o raio da circunferencia: "); scanf("%f", &radius);

	area = pi * radius * radius;
	per = 2 * pi * radius;

	printf("Área = %lf\nPerimetro = %f\n", area, per);

	return 0;
}