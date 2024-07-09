#include <stdio.h>

#define TAM 3
#define ESPACO ' '

//funcão para inicializar o tabuleiro com espacos em branco.
//como se trata de matriz, podemos omitir o a dimensao mais a esquerda
void inic(char m[][TAM]) {
    for(int i = 0; i < TAM; i++)
        for(int j = 0; j < TAM; j++)
            m[i][j] = ESPACO;
}

void imprime(char m[][TAM]) {
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            printf("%2c %c", m[i][j], j == TAM - 1 ? ' ' : '|');
        }
        if(i != TAM - 1)
            printf("\n-----------\n");
    }
    putchar('\n');
}

int main() {
    char velha[TAM][TAM], ch = '0';
    int x, y, jogadas = 0;
    
    inic(velha);
    
    while(1) {
        imprime(velha);
        printf("Digite a posicão que quer marcar: ");
        scanf("%d %d", &x, &y); //vai digitar dois números de 1 a 3;
        x--; y--; //vai corrigir para corresponder aos indices da matriz (0 a TAM - 1);
        
        if(velha[x][y] == ESPACO) { //verifica se a posição está livre.
            velha[x][y] = ch = (ch == '0') ? 'X' : '0'; //alterna o simbolo, simula duas pessoas jogando.
            jogadas++;
        }
        else
            printf("Posicão já ocupada. Jogue novamente!\n");
            
        if(jogadas == TAM * TAM) //todas as posicoes estao ocupadas, encerra o jogo.
            break;
    }
    
    imprime(velha);
           
    return 0;
}