#include <stdio.h>

#define MIN_INT -2147483648

int main()
{
	int quantity, count, largest, number;

	printf("enter the quantity of numbers to be read: ");
	scanf("%d", &quantity);

	printf("now, enter them: \n");

	largest = MIN_INT;
	count = 0;

	for(int i = 0; i < quantity; i++)
	{

		scanf("%d", &number);

		if(number > largest)
		{
			largest = number;
			count++;
		}

	
	}

	printf("%d is the largest number, and throughout the reading, the largest number changed %d times.\n", largest, count);

	return 0;
}