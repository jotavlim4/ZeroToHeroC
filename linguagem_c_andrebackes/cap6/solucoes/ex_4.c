#include <stdio.h>

int main(){
    int A[6] = {1, 0, 5, -2, -5, 7};
    int sum1 = 0;

    sum1 = A[0] + A[1] + A[5];

    printf("A[0] + A[1] + A[5] = %d\n", sum1);

    A[4] = 100;

    for(int i = 0; i < 6; i++){
        printf("A[%d]: %d\n",i ,A[i]);
    }

    return 0;
}