#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

void preenche_matriz(int matriz[][TAM]){
    int random;
    
    srand(time(NULL));

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            random = (rand() % 201) - 100;
            
            matriz[i][j] = random;
        }
    }
}

void imprime_matriz_posicao(int matriz[][TAM]){
    char n = '-';
    char p = '+';

    for(int i = 0; i < TAM; i++){
        printf("|");
        for(int j = 0; j < TAM; j++){
            if(matriz[i][j] < 0){
                printf("%4c ", n);
            }
            else
                printf("%4c ", p);
        }
        printf("|\n");        
    }
}

void imprime_matriz(int matriz[][TAM]){
    
    for(int i = 0; i < TAM; i++){
        printf("|");
        for(int j = 0; j < TAM; j++){
            printf("%4d ", matriz[i][j]);
        }
        printf("|\n");
    }
}

int main(){
    int matriz[TAM][TAM];
    preenche_matriz(matriz);
    
    printf("Matriz gerada: \n");
    imprime_matriz(matriz); putchar('\n');

    printf("Matriz dos sinais: \n");
    imprime_matriz_posicao(matriz); putchar('\n');

    return 0;
}