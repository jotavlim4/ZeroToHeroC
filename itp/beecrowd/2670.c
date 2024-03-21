#include <stdio.h>

int main(){
    unsigned int A_1, A_2, A_3;
    unsigned int total_1, total_2, total_3;

    scanf("%u %u %u", &A_1, &A_2, &A_3);

    //maquina no primeiro andar
    total_1 = A_2 * 2 + A_3 * 4;
    //maquina no segunda andar
    total_2 = A_1 * 2 + A_3 * 2;
    //maquina no tercerio andar
    total_3 = A_1 * 4 + A_2 * 2;

    if(total_1 <= total_2 && total_1 <= total_3){
        printf("%u\n", total_1);
    }
    else if(total_2 <= total_1 && total_2 <= total_3){
        printf("%u\n", total_2);
    }
    else{
        printf("%u\n", total_3);
    }
    
    return 0;   
}