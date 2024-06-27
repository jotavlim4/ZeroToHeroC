#include <stdio.h>

int main(){
    int i, n;

    n = 1; //true
    i = 1;
    while(i <= 10 || n) { //obriga entregar no laço
        printf("%d\n", i);
        n = 0; //muda para falso, para entrar no laço apenas se 
        i++;    //a condição for verdadeira
    }
}