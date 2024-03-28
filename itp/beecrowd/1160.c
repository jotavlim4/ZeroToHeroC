/* 
 *cidade menor sempre é a cidade A
 *quanto tempo levara para a cidade A (menor) ultrapassar a cidade B (maior)
 *quando a taxa de crescimento de A é maior que a taxa de crescimento de B
 *saida deve ser o tempo em ano para que a ultrapassagem ocorra
 * 
 * ENTRADA:
 * inteiro T (1 <= T <= 3000): casos teste
 * cada teste tem 4 numeros: pa, pb, ga, gb, populacao de a, polucao de b, crescimento de a, crescimento de b, 
 * respectivamente.
 * taxa de crescimento deve ser double
 * 
 * SAIDA:
 * tempo em anos "%d anos.\n"
 * se o tempo for maior que 100 anos imprimir "Mais de %d seculo\n" usar break
 */
#include <stdio.h>
#include <math.h>

int main(){
    int t, pa, pb, pa_n, pb_n, n;
    double ga, gb;
    double time;

    scanf("%d", &t);

    n = 1;
    for(int i = 0; i < t; i++){
        scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);

        while(1){
            pa_n = pa * ((ga / 100) + 1);
            pb_n = pb * ((gb / 100) + 1);

            if(pa_n <= pb_n){
                pa = pa_n;
                pb = pb_n;
                n++;
                if(n <= 100){
                    continue;
                }
                else{
                    break;
                }
                continue;
            }
            else{
                break;
            }
        }

        if(n >= 0 && n <= 100){
            printf("%d anos.\n", n);
        }
        else{
            printf("Mais de 1 seculo.\n");
        }
        n = 1;
    }

    return 0; 
}