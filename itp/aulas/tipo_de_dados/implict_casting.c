#include <stdio.h>

int main() {
    int a, b;
    double c;
    double resultado;
    
    a = 2;
    b = 3;
    c = 3l;
    
    resultado = a / b;
    printf("Resultado = %lf\n", resultado);
    
    resultado = a / c;
    printf("Resultado = %lf\n", resultado);
    
    return 0;
}

/*
O que acontece:

Na linha 12 temos a divisão entre dois números inteiros. Logo
o resultado precisa ser um número inteiro, portanto teremos
o quociente da divisão inteira entre 2 e 3 que será 0;

Já na linha 15 temos a divisão entre um inteiro e um real (c). Nesse
caso, o compilador faz o casting (promoção de tipo) da variável 'a' para 
double com a finalidade de poder operá-lo com a variável 'c'. Como temos
a divisão entre dois números reais o resultado será um número real.


*/