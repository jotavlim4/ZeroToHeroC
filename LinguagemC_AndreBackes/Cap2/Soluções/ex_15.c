#include <stdio.h>

int main(){
	char my_char;
	int my_int;
	float my_float;

	scanf("%c %d %f", &my_char, &my_int, &my_float);

	printf("Separados por espaço: %c %d %f\n", my_char, my_int, my_float);
	printf("Separados por tabulação horizontal: %c\t%d\t%f\n", my_char, my_int, my_float);
	printf("Um em cada linha:\n%c\n%d\n%f\n", my_char, my_int, my_float);	

	return 0;
}