#include <stdio.h>

int tem_pao(int posi, int posj, int l, int c, int m[][c]) {
	int esquerda, direita, baixo, cima;
	int count;

	count = 0;

	esquerda = m[posi][posj - 1];
	direita = m[posi][posj + 1];
	cima = m[posi - 1][posj];
	baixo = m[posi + 1][posj];

	if(cima == 1)
		count++;

	if(baixo == 1)
		count++;

	if(esquerda == 1)
		count++;

	if(direita == 1)
		count++;


	return count;
}

void imprime_matriz(int l, int c, int m[][c]) {
	for(int i = 0; i < l; i++)
		for(int j = 0; j < c; j++)
			j == c - 1 ? printf("%d\n", m[i][j]) : printf("%d", m[i][j]);
	
}


int main() {
	int l, c;

	while(scanf("%d %d", &l, &c) != EOF) {
		int map[l + 2][c + 2];
		int map_pao[l][c];

		for(int i = 0; i < l + 2; i++)
			for(int j = 0; j < c + 2; j++)
				map[i][j] = 0;

		for(int i = 1; i <= l; i++)
			for(int j = 1; j <= c; j++)
				scanf("%d", &map[i][j]);

		for(int i = 1; i <= l; i++) {
			for(int j = 1; j <= c; j++) {
				if(map[i][j] == 0)
					map_pao[i - 1][j - 1] = tem_pao(i, j, l + 2, c + 2, map);
				
				else
					map_pao[i - 1][j - 1] = 9;
			}
		}

		imprime_matriz(l, c, map_pao);
	}

	return 0;
} 