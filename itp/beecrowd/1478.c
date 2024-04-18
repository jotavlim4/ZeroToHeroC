#include <stdio.h>

void preenche_espiral(int l, int m[][l]) {
    int limite_superior, limite_inferior, limite_esquerdo, limite_direito;
    int valor, i, j, k;

    limite_esquerdo = limite_superior = 0;
    limite_direito = limite_inferior = l - 1;

    while(limite_esquerdo <= limite_direito && limite_superior <= limite_inferior) {
        k = 1;
        for(j = limite_esquerdo; j <= limite_direito; j++) {
            m[limite_superior][j] = k++;
        }

        k -= 2;
        for(i = limite_superior + 1; i <= limite_inferior; i++){
            m[i][limite_direito] = k--;
        }
        
        k = 2;
        for(j = limite_direito - 1; j >= limite_esquerdo; j--){
            m[limite_inferior][j] = k++;
        }

        k -= 2;
        for(i = limite_inferior - 1; i > limite_superior; i--){
            m[i][limite_esquerdo] = k--;
        }

        limite_esquerdo++; limite_superior++;
        limite_direito--; limite_inferior--;
    }
}

void imprime_matriz(int l, int m[][l]) {
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < l; j++) {
            j == l - 1 ? printf("%3d\n", m[i][j]) : printf("%3d ", m[i][j]);
        }
    }
    printf("\n");
}


int main() {
    int n;

    while(1) {
        scanf("%d", &n); if(n == 0) break;

        int matriz[n][n];

        preenche_espiral(n, matriz);
        imprime_matriz(n, matriz);
    }

    return 0;
}