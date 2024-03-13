#include <stdio.h>

#define TAM 100

int main(){
    int numbers[TAM];
    int i, j;

    i = j = 0;
    while(i < 100){
        if(j % 7 != 0){
            numbers[i] = j;
            printf("numbers[%d] = %d\n", i, numbers[i]);
            i++;           
        }
        j++;
    }

    return 0;
}