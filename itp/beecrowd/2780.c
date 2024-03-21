/*
Se D ≤ 800, a cesta vale 1 ponto;
Se 800 < D ≤ 1400, a cesta vale 2 pontos;
Se 1400 < D ≤ 2000, a cesta vale 3 pontos. 
*/
#include <stdio.h>

int main(){
    int distancia, ponto;

    scanf("%d", &distancia);

    if(distancia <= 800){
        ponto = 1;
        printf("%d\n", ponto);
    }
    else if(distancia > 800 && distancia <= 1400){
        ponto = 2;
        printf("%d\n", ponto);
    }
    else if(distancia > 1400 && distancia <= 2000){
        ponto = 3;
        printf("%d\n", ponto);
    }
    return 0;
}