#include <stdio.h>
#include <string.h>


void bubble_sort(int vetor[], int tam){
    int i, j, temp;

    for(i = 0; i < tam - 1; i++){
        for(j = 0; j < tam - i - 1; j++){
            if(vetor[j] > vetor[j + 1]){
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main(){
    int tam;

    scanf("%d", &tam);

    int vetor[tam];

    for(int i = 0; i < tam; i++){
        scanf("%d", &vetor[i]);
    }

    printf("Vetor lido:\n");

    for(int i = 0; i < tam; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    printf("Vetor ordenado:\n");

    bubble_sort(vetor, tam);

    for(int i = 0; i < tam; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    return 0;
}