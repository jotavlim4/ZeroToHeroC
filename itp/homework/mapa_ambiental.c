#include <stdio.h>

#define TAM 3

void mat_3x(int posx, int posy, int l, int c, int m1[][c], int lin, int col, int m2[][TAM]) {
	for(int i = 0; i < lin && posx + i < l; i++)
		for(int j = 0; j < col && posy + j < c; j++) 
			m2[i][j] = m1[posx + i][posy + j];
}


double media_desmatamento(int l, int c, int mat[][c]) {
	double soma;
	
	soma = 0.0;
	for(int i = 0; i < l; i++)
		for(int j = 0; j < c; j++)
			soma += mat[i][j];
	
	return soma;
}


int main() {
	int n, m;

	scanf("%d %d", &n, &m);

	int linhas, colunas;

	//não precisamos percorrer todos os elementos do mapa n x m
	//para montar todos os possiveis mapas 3x3 do mapa origial
	//basta percorre até a metade das linhas se o número de linhas do mapa original for par
	//e a divisao inteira mais 1 se for impar (o mesmo para a coluna)
	
	linhas = (n % 2 == 0) ? (n / 2) : (n / 2) + 1; //valor máximo que serão acessados no mapa original para linhas
	colunas = (m % 2 == 0) ? (m / 2) : (m / 2) + 1; //valor máximo que serão acessados no mapa original para colunas

	int mapa[n][m];
	int mapa_3x[TAM][TAM];
	int pos_i_inicial, pos_j_inicial;
	int i, j;
	double menor, media;


	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
			scanf("%d", &mapa[i][j]);	

	menor = 2147483647.0; //guarda o valor da menor média
	//loop para formar todos os possíveis mapas 3x3 do mapa original
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++) {
			mat_3x(i, j, n, m, mapa, TAM, TAM, mapa_3x); //monta um mapa 3x3 com os valores do mapa original partindo da posicao i, j
			media = media_desmatamento(TAM, TAM, mapa_3x); //media dos valores do mapa 3x3 atual

			//verifica se a media dos valores do mapa 3x3 atual é menor do que o mapa anteriro
			//se for atualiza a variável menor e salva a posicao inicial da matriz 3x3 atual.
			if(media < menor) {
				menor = media;
				pos_i_inicial = i;
				pos_j_inicial = j;
			}
		}
	}

	printf("Área de Desmatamento: de (%d, %d) até (%d, %d)\n", pos_i_inicial + 1, pos_j_inicial + 1, pos_i_inicial + 3, pos_j_inicial + 3);


	return 0;
}

/*
P.S.:

Depois de finalizado o programa percebi que bastava 
subtrair 3 do tamanho do mapa original para formar 
todas as submatrizes 3x3 sem acessar endereços inválidos


Mantive a solução original pois parecia mais correto (eticamente falando), pois percebi
com ajuda de pesquisas na internet (juro que não foi no chatgpt).

Vou corrigir depois.
*/