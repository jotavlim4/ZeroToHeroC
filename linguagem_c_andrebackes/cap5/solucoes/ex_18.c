#include <stdio.h>


int main()
{
	int number;
	int check = 0;

	scanf("%d", &number);

	if(number <= 1)
	{
		printf("please, enter a positive integer greater than 1.\n");
	}
	
	for(int i = 2; i * i <= number; i++)
	{
		if(number % i == 0)
		{
			check = 1;
		}
	}
	
	if(check == 1)
	{
		printf("%d ins't prime\n", number); 
	}
	else
	{
		printf("%d is a prime\n", number);
	}
	

	return 0;
}