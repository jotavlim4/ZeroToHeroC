#include <stdio.h>

int main(){
    int numbers[6];

    for(int i = 0; i < 6; i++){
        scanf("%d", &numbers[i]);
    }

    for(int i = 0; i < 6; i++){
        printf("%d\n", numbers[i]);
    }

    return 0;
}
