#include <stdio.h>

int main(){
    int numbers[10];
    int count = 0;

    for(int i  = 0; i < 10; i++){
        scanf("%d", &numbers[i]);

        if(numbers[i] % 2 == 0){
            count++;
        }
    }

    printf("we have %d even numbers in numbers[10]\n", count);

    return 0;
}