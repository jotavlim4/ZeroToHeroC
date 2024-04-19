#include <stdio.h>

void preenche_matriz(int l, int m[][l]) {
    int i, j;
    int h, k;

    k = 0;
    h = l - 1;
    for(i = 0; i < l; i++) {
        for(j = 0; j < l; j++) {
            if(i == j)
                m[i][j] = 2;
            
            else if(i + j == l - 1)
                m[i][j] = 3;
            
            else
                m[i][j] = 0;
        }
    }

    for(i = l / 3; i <= (l - 1) - l / 3; i++) {
        for(j = l / 3; j <= (l - 1) - l / 3; j++) {
            if(i == j && i + j == l - 1) 
                m[i][j] = 4;
            
            else 
                m[i][j] = 1;
        }
    }
}

void imprime_matriz(int l, int m[][l]) {
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < l; j++) {
            j == l - 1 ? printf("%d\n", m[i][j]) : printf("%d", m[i][j]);
        }
    }
    printf("\n");
}

int main() {
    int n; 

    while(scanf("%d", &n) != EOF) {
        int m[n][n];

        preenche_matriz(n, m);
        imprime_matriz(n, m);
    }
    

    return 0;
}