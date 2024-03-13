#include <stdio.h>
#include <math.h>

#define TAM 20

int main(){
    double numbers[TAM], power[TAM];

    for(int i = 0; i < TAM; i++){
        scanf("%lf", &numbers[i]);
        power[i] = pow(numbers[i], 2);
    }

    for(int i = 0; i < TAM; i++){
        printf("numbers[%d] = %.2lf\n", i, numbers[i]);
    }

    for(int i = 0; i < TAM; i++){
        printf("power[%d] = %.2lf\n", i, power[i]);
    }
    
    return 0;
}