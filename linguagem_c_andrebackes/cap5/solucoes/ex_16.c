#include <stdio.h>


int main()
{
	double harmonic_number;
	int number;

	printf("enter a positive integer: ");
	scanf("%d", &number);


	harmonic_number = 0;
	for(int i = 1; i <= number; i++)
	{
		harmonic_number += 1.0 / i ;
	}

	printf("Your H_n: %.2lf\n", harmonic_number);

	return 0;
}