#include <stdio.h>

int main(){
    int numbers;
    int bino_numbers;
    int count_k2, count_k3, count_k4, count_k5;

    scanf("%d", &numbers);

    count_k2 = count_k3 = count_k4 = count_k5 = 0;
    
    for(int i = 0; i < numbers; i++){
        scanf("%d", &bino_numbers);
        if(bino_numbers % 2 == 0){
            count_k2++;
        }
        
        if(bino_numbers % 4 == 0){
            count_k4++;
        }
        
        if(bino_numbers % 3 == 0){
            count_k3++;
        }
        
        if(bino_numbers % 5 == 0){
            count_k5++;
        }
    }
    printf("%d Multiplo(s) de 2\n", count_k2);
    printf("%d Multiplo(s) de 3\n", count_k3);
    printf("%d Multiplo(s) de 4\n", count_k4);
    printf("%d Multiplo(s) de 5\n", count_k5);

    return 0;
}