#include <stdio.h>

int main(){
	char c1, c2, c3;

/*
	c1 = getchar();
	c2 = getchar();
	c3 = getchar();
*/

	scanf("%c %c %c", &c1, &c2, &c3);

	printf("Caracteres lidos:\n'%c'\n'%c'\n'%c'\n", c1, c2, c3);

	return 0;
}