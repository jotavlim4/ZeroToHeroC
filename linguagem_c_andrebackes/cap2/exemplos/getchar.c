#include <stdio.h>

int main(){
	char c;

	c = getchar();

	printf("O código ASCII de '%c' é *%d*\n", c, c);

	return 0;
}