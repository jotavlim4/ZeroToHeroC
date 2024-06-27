#include <stdio.h>

int soma(int x, int y) { //recebe como argumentos dois inteiros,
                         //que serão armazenados nos parametros
                         //x e y 
    return x + y;
}

int dobro(int x) {
    return 2 * x;
}

int main() {
    int a, b;

    a = soma(4, 3); //passa os valores inteiros 4 e 3 como argumentos,
                    //armazena o valor retornado por soma na variável
                    //resultado.

    b = dobro(4);

    printf("%d\n%d\n%d\n", a, b , dobro(3)); //o valor retornoado por dobro(3)
                                             //será usado para a impressao
                                             //do printf.
                                             //portando devemos usar um
                                             //formatador compatível com 
                                             //o tipo retornado pela funcao.

    return 0;
}