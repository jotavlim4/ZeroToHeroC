#include <stdio.h>

#define TAM_MAPA 6

int main(){
	char mapa[TAM_MAPA][TAM_MAPA] = {0};
	int x, y;
	int movimentos;
	char caminho;
	int fora = 0, detectado = 0;

	//faz a leitura dos simbolos e atribui a matriz mapa[TAM_MAPA][TAM_MAPA]
	for(int i = 0; i < TAM_MAPA; i++)
		for(int j = 0; j < TAM_MAPA; j++)
			scanf(" %c", &mapa[i][j]);

	scanf("%d", &movimentos);
	scanf("%d%d", &x, &y);
	x--; y--;
	
	while(movimentos--){
		scanf("%c", &caminho);

		switch(caminho){
			case 'C': x--; break;
			case 'B': x++; break;
			case 'D': y++; break;
			case 'E': y--; break;
		}

		if(x > TAM_MAPA || y > TAM_MAPA || x < 0 || y < 0){
			fora = 1;
			break;
		}
		else{
			if(x > 0 && mapa[x - 1][y] == 'v')
				detectado = 1;
			else if(x < TAM_MAPA - 1 && mapa[x + 1][y] == '^')
				detectado = 1;
			else if(y > 0 && mapa[x][y + 1] == '<')
				detectado = 1;
			else if(y < TAM_MAPA - 1 && mapa[x][x - 1] == '>')
				detectado = 1;
		}

	}

	if(fora)
		printf("Movimento invalido!\n");
	else{
		if(detectado)
			printf("Freeze!\n");
		else
			printf("Like a ninja...\n");
	}
	return 0;
}