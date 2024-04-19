#include <stdio.h>
#include <math.h>

void preenche_matriz(int l, int m[][l]) {
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < l; j++) {
            m[i][j] = pow(2, i + j);
        }
    }
}

void imprime_matriz(int l, int m[][l], int digitos) {
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < l; j++) {
            j == l - 1 ? printf("%*d\n", digitos, m[i][j]) : printf("%*d ", digitos,  m[i][j]);
        }
    }
    printf("\n");
}

int digitos(int pos) {
    int count;
    int r, q;

    count = 0;

    while(pos) {
        count++;

        pos /= 10;
    }
    return count;
}

int main() {
    int n;

    while(1) {
        scanf("%d", &n); if(n == 0) break;

        int m[n][n];
        int t;

        preenche_matriz(n, m);
        
        t = digitos(m[n - 1][n - 1]);

        imprime_matriz(n, m, t);
    }

    return 0;
}