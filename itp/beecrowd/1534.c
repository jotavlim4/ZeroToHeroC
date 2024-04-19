#include <stdio.h>

void preenche_matriz(int l, int m[][l]) {
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < l; j++) {
            m[i][j] = 3;
        }
    }
}

void troca_elemento(int l, int m[][l]) {
    int k, j;

    k = 0;
    j = l - 1;
    for(int i = 0; i < l; i++) {
        if(k != j){
            m[i][k] = 1;
            m[i][j] = 2;
        }
        else{
            m[i][k] = 2;
        }
        k++;
        j--;  
    }
        
}

void imprime_matriz(int l, int m[][l]) {
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < l; j++) {
            j == l - 1 ? printf("%d\n", m[i][j]) : printf("%d", m[i][j]);
        }
    }
}


int main() {
    int n;

    while(scanf("%d", &n) != EOF) {
        int m[n][n];

        preenche_matriz(n, m);
        troca_elemento(n, m);
        imprime_matriz(n, m);
    }

    return 0;
}   