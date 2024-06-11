#include <stdio.h>

int main() {
	char d1, d2; //dd
	char m1, m2; //mm
	char a1, a2, a3, a4; //aaaa

	printf("Digite uma data no formato aaaa-mm-dd: ");
	scanf(" %c%c%c%c-%c%c-%c%c", &a1, &a2, &a3, &a4, &m1, &m2, &d1, &d2);

	printf("Data lida: %c%c/%c%c/%c%c%c%c\n", d1, d2, m1, m2, a1, a2, a3, a4);

	return 0;

}