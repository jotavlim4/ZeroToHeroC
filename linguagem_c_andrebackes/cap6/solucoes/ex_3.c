#include <stdio.h>

int main(){
    double numbers[5];
    double average = 0.0;

    for(int i = 0; i < 5; i++){
        scanf("%lf", &numbers[i]);
        average += numbers[i];
    }

    for(int i = 0; i < 5; i++){
        printf("%.2lf\n", numbers[i]);
    }
    printf("average = %.2lf\n", average / 5.0);

    return 0;
}