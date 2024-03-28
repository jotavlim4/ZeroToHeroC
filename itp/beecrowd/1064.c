#include <stdio.h>

int main(){
    double numero, media;
    int positivos;

    positivos = 0;
    media = 0.0;
    for(int i = 0; i < 6; i++){
        scanf("%lf", &numero);

        if(numero > 0){
            positivos++;
        }
        else{
            continue;
        }
        media += numero;
    }

    printf("%d valores positivos\n", positivos);
    printf("%.1lf\n", media / positivos);
    return 0;
}