#include <stdio.h>

#define TAM 10

void inic(int s[]) {
    for(int i = 0; i < TAM; i++)
        s[i] = 0;
}

int main() {
    int v[TAM];
    
    inic(v);
    
    for(int i = 0; i < TAM; i++)
        v[i] = i;
    
    for(int i = TAM - 1; i >= 0; i--)
        printf("%d\n", v[i]);
        
    return 0;
}

//desse modo, onde ocorrer o nome TAM será substituido pelo valor
//10 durante a fase de pré-processamento.

//se precisarmos alterar o tamanho do vetor, basta atribuir a TAM
//outro valor inteiro.

//é chamada de constante simbolica, pois nao existe na memória do computador.

//o tipo da constante é o tipo do valor atribuido a ela.