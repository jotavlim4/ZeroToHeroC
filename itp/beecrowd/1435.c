#include <stdio.h>

void preenche_espiral(int l, int m[][l]) {
    int i, j, count;
    int l_col_es, l_col_dir, l_lin_sup, l_lin_inf;

    l_col_es = 0;
    l_col_dir = l - 1;

    l_lin_sup = 0;
    l_lin_inf = l - 1;

    count = 1;

    while (l_col_es <= l_col_dir && l_lin_sup <= l_lin_inf) {
        for (int j = l_col_es; j <= l_col_dir; j++)
            m[l_lin_sup][j] = count;

        for (int i = l_lin_sup + 1; i <= l_lin_inf; i++)
            m[i][l_col_dir] = count;

        for (int j = l_col_dir - 1; j >= l_col_es; j--)
            m[l_lin_inf][j] = count;

        for (int i = l_lin_inf - 1; i > l_lin_sup; i--)
            m[i][l_col_es] = count;

        l_col_es++; l_lin_sup++;
        l_col_dir--; l_lin_inf--;
        count++;
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