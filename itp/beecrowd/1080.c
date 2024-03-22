#include <stdio.h>

#define QTD 100
#define MIN_INT -2147483648

int main(){
    int number;
    int largest, pos;

    largest = MIN_INT;

    for(int i = 0; i < QTD; i++){
        scanf("%d", &number);

        if(number > largest){
            largest = number;
            pos = i;
        }
    }

    printf("%d\n", largest);
    printf("%d\n", pos);

    return 0;
}