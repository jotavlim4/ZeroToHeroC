#include <stdio.h>

int main()
{
	int number;
	int count;

	printf("enter a positive integer: ");
	scanf("%d", &number);

	count = 1;
	for(int i = 1; i <= number; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			j == i ? printf("%d\n", count) : printf("%d ", count);
			count++;
		}
	}
	return 0;
}