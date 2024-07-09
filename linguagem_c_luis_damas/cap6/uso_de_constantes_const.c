#include <stdio.h>

const int tam = 10;

void inic(int s[]) {
    for(int i = 0; i < tam; i++)
        s[i] = 0;
}

int main() {
    int v[tam];
    
    inic(v);
    
    for(int i = 0; i < tam; i++)
        v[i] = i;
    
    for(int i = tam - 1; i >= 0; i--)
        printf("%d\n", v[i]);
        
    return 0;
}


//dessa forma, a todas as ocorrencias de tam sao atribuidas
//o valor 10.