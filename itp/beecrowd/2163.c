#include <stdio.h>

    int procura_padrao(int posx, int posy, int l, int c, int m[l][c]) {
        for(int i = -1; i <= 1; i++) {
            for(int j = -1; j <= 1; j++) {
                if(i != 0 || j != 0)
                    if(m[posx + i][posy + j] != 7)
                        return 0;
                        
            }
        }
        return 1;
    }

    void procura_arredor(int l, int c, int m[l][c]) {
        int i, j;
        for(i = 1; i <= l - 2; i++) {
            for(j = 1; j <= c - 2; j++) {
                if(m[i][j] == 42) {
                    if(procura_padrao(i, j, l, c, m)) {
                        printf("%d %d\n", i, j);
                        return;
                    }
                }
            }
        }

        printf("0 0\n");
    }    


int main(){
    int l, c;
    
    while(scanf("%d %d", &l, &c) != EOF) {
        int m[l + 2][c + 2];

        for(int i = 0; i < l + 2; i++)
            for(int j = 0; j < c + 2; j++) 
                m[i][j] = 0;
            
        for(int i = 1; i <= l; i++)
            for(int j = 1; j <= c; j++)
                scanf("%d", &m[i][j]);
    

        procura_arredor(l + 2, c + 2, m);
    }
    return 0;
}