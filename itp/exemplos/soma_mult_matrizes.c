#include <stdio.h>

int main() {
	int mat[2][2] = {{1, 2}, {3, 4}};
	int mat2[2][2] = {{5, 6}, {7, 8}};
	int result_soma[2][2]; //resutlado esperado {{6, 8}, {10, 12}}; 
	int result_mult[2][2]; 

	printf("Resultado da soma: \n");
	for(int i = 0; i < 2; i++){
		printf("|");
		for(int j = 0; j < 2; j++){
			result_soma[i][j] = mat[i][j] + mat2[i][j];

			j == 1 ? printf("%d|\n", result_soma[i][j]) : printf("%d ", result_soma[i][j]);
		}
	}
	printf("\n");
	printf("Resultado da multiplacação: \n");
	for(int i = 0; i < 2; i++) {
		printf("|");
		for(int j = 0; j < 2; j++){
			result_mult[i][j] = 0;
			for(int k = 0; k < 2; k++){
				result_mult[i][j] = mat[i][k] * mat2[k][j];
			}	
			j == 1 ? printf("%d|\n", result_mult[i][j]) : printf("%d ", result_mult[i][j]);
		}

	}
	return 0;
}
			
		