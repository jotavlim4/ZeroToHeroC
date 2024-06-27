#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int dobro(int a) {
    return 2 * a;
}

int main() { 
    int x;
    
    //funcoes podem ser argumentos de outras funcao
    //devem respeitar as regras dos arguemtos (correspondencia de ordem, tipo)
    x = soma(dobro(soma(1, 2)), 7);
    //soma(1, 2) -> 3 
    //dobro(soma(1, 2)) -> dobro(3) -> 6
    //soma(dobro(soma(1, 2)), 7) -> soma(dobro(3), 7) -> soma(6, 7) -> 13 
    printf("%d\n", dobro(x)); //dobro(x) -> dobro(13) -> 26

    return 0;
}