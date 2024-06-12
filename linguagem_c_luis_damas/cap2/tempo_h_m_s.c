#include <stdio.h>

int main() {
	int tempo;

	printf("Digite um tempo em segundos: "); scanf("%d", &tempo);

	printf("Hora(s): %d\n", (int) (tempo / 3600));
	printf("Minuto(s): %d\n", (int) ((tempo % 3600) / 60));
	printf("Segundo(s): %d\n", (int) (tempo % 60));

	return 0;
}