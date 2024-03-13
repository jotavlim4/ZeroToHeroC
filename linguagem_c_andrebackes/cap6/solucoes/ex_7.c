#include <stdio.h>

#define MAX_INT 2147483647 
#define MIN_INT -2147483648

int main(){
    int x[10];
    int largest, smallest;

    largest = MIN_INT;
    smallest = MAX_INT;

    for(int i = 0; i < 10; i++){
        scanf("%d", &x[i]);

        if(x[i] > largest){
            largest = x[i];
        }

        if(x[i] < smallest){
            smallest = x[i];
        }
    }

    printf("largest = %d\n", largest);
    printf("smallest = %d\n", smallest);

    return 0;
}