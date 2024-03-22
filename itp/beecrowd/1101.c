#include <stdio.h>

int main(){
    int m, n;
    int largest, smallest;
    int sum = 0;

    while(1){
        scanf("%d %d", &m, &n);

        if(m <= 0 || n <= 0){
            break;
        }
        else{
            if(m > n){
                largest = m;
                smallest = n;
            }
            else{
                largest = n;
                smallest = m;
            }

            for(int i = smallest; i <= largest; i++){
                sum += i;
                printf("%d ", i);
            }
        }
        printf("Sum=%d\n", sum);
        sum = 0;
    }
    return 0;
}