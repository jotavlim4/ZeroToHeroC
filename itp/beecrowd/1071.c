#include <stdio.h>

int main(){
    int numero_inicial, numero_final, temp;
    int soma = 0;

    scanf("%d %d", &numero_inicial, &numero_final);

    if(numero_final < numero_inicial){
        temp = numero_final;
        numero_final = numero_inicial;
        numero_inicial = temp;
    }

    for(int i = numero_inicial + 1; i < numero_final; i++){
        if(i % 2 != 0){
            soma += i;
        }
    }

    printf("%d\n", soma);

     return 0;
}