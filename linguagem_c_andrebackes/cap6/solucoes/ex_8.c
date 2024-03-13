#include <stdio.h>

int main(){
    double numbers[10];
    double sum = 0.0;
    int negative;

    negative = 0;
    for(int i = 0; i < 10; i++){
        scanf("%lf", &numbers[i]);

        if(numbers[i] < 0){
            negative++;
        }
        else{
            sum += numbers[i];
        }
    }

    printf("quantity of negative numbers = %d\n", negative);
    printf("sum of positive numbers = %.2lf\n", sum);

    return 0;
}