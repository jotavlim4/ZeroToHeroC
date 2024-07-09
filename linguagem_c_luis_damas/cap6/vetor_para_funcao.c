#include <stdio.h>

void inicia_vetor(int v[], int n) {
    for(int i = 0; i < n; i++)
        v[i] = 0;
}

void imprime_vetor(int v[], int n) {
    for(int i = 0; i < n; i++)
        printf("%2d ", v[i]);
    putchar('\n');
}

int main() {
    int v[10], s[20], r[30];
    
    inicia_vetor(v, 10);
    imprime_vetor(v, 10);

    inicia_vetor(s, 20);
    imprime_vetor(s, 20);
    
    inicia_vetor(r, 30);
    imprime_vetor(r, 30);
    
    return 0;
}

/* 

Na passagem de vetor para funções, a função só precisa saber o tipo
do vetor, não sendo necessário indicar no vetor o tamnho dele. No entanto,
para acesso as posições do vetor a informação do tamanho é necessária.

Portanto, cabeçalhos dessa forma são necessários:

void inicia_vetor(int v[], int n)
void imprime_vetor(int v[], int n) 


*/