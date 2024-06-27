#include <stdio.h>

int main() {
    int i; 

    i = 1;
    while(i <= 10) {
        printf("%2d\n", i);
        i++; 
        /*
        equivalente a:
        i = i; -> atribui o valor atual de i a i.
        i = i + 1; -> incrimenta o valor de i em uma unidade.
        */
    }
}