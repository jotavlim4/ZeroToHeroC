#include <stdio.h>

void inic(int s[]) {
    for(int i = 0; i < 10; i++)
        s[i] = 0;
}

int main() {
    int v[10];
    
    inic(v);
    
    for(int i = 0; i < 10; i++)
        v[i] = i;
    
    for(int i = 10 - 1; i >= 0; i--)
        printf("%d\n", v[i]);
        
    return 0;
}


/*

O problema nesse código é que se precisarmos alterear o tamanho do
vetor, precisariamos fazer alterações nos seguintes trecheos:

    for(int i = 0; i < 10; i++)
    int v[10];
    for(int i = 0; i < 10; i++)
    for(int i = 10 - 1; i >= 0; i--)
    
são poucas alterações, mas para um caso onde existem milhares de linhas
isso pode se tornar um trabalho árduo e que pode acarretar problemas.

para resolver isso, utilizamos constantes. constantes são nomes que 
são substituidos pelo valor atribuidos a elas onde elas ocorrerem.

Os códigos 'uso_de_constantes_define' e 'uso_de_constantes_const' apresantam o uso de constantes
com o #define e 'const'.

*/