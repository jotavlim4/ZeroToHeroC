#include <stdio.h>

//nota valida está no intervalo [0, 10]
//se 1 calcula novamente, se 2 break

//entrada: valores reais positivos ou negativos

int main(){
    double nota, media;
    int x, leitura;

    media = 0.0;
    leitura = 0;
    
    while(1){
        scanf("%lf", &nota);
        if(nota >= 0 && nota <= 10){
            media += nota;
            leitura++;
            if(leitura == 2){
                printf("media = %.2lf\n", media / 2);
                printf("novo calculo (1-sim 2-nao)\n");
        
                while(1){
                    scanf("%d", &x);
                    if(x == 1 || x == 2){
                        break;
                    }
                    else{
                        printf("novo calculo (1-sim 2-nao)\n");
                        continue;
                    }
                }
                if(x == 2){
                    break;
                }
                else if(x == 1){
                    leitura = 0;
                    media = 0;
                    continue;
                }
            }
            else{
                continue;
            }
        }
        else{
            printf("nota invalida\n");
            continue;
        }
    }

    return 0;
}