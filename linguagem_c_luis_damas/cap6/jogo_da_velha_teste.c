#include <stdio.h>

#define TAM 3

int main() {
    char tabuleiro[TAM][TAM] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    
    tabuleiro[0][0] = 'X';
    tabuleiro[0][2] = '0';
    tabuleiro[1][1] = 'X';
    tabuleiro[2][2] = '0';
    
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++)
            printf("%c%c", tabuleiro[i][j], j == TAM - 1 ? ' ' : '|');
        if(i != TAM - 1)
            printf("\n-----\n");
    }
    putchar('\n');
    
    return 0;
}   