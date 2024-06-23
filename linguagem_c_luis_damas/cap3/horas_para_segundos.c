#include <stdio.h>

int main() {
    int h;
    long int seg;

    printf("Digite o número de horas: ");
    scanf("%d", &h);

    seg = h < 0 ? 0 : h * 3600l; 
    // o 'l' ao final faz o casting de 3600 para long
    //para que seg seja também long, caso contrario
    //estariamos operando int * int -> int
    //outra forma de fazer isso: (long) 3600;

    printf("%d hora(s) é igual a %ld segundo(s)\n", h, seg);

    return 0;
}