#include <stdio.h>

int main() {
    int i; 

    i = 1;
    while(i <= 10) {
        printf("%2d\n", i++);
        //passa o valor de i como argumento para printf.
        //depois incrementa i em uma unidade.
    }
}