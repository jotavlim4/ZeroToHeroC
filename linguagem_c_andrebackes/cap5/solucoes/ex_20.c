#include <stdio.h>

int main()
{
	int number, fatorial;
	double e;


	printf("enter a positive integer: ");
	scanf("%d", &number);

	fatorial = 1;
	e = 0.0;
	for(int i = 1; i <= number; i++)
	{
		fatorial *= i;
		e = e + (1.0 / fatorial);  
	}

	printf("e = %.2lf\n", e);

	return 0;
}