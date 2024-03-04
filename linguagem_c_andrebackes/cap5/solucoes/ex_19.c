#include <stdio.h>

int main()
{
	double sum = 0;

	for(int i = 1; i <= 50; i++)
	{
		sum = sum + ((2 * i - 1)/ i);
	}
	
	printf("%2.lf\n", sum);

	return 0;
}