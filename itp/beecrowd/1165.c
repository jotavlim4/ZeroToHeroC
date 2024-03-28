#include <stdio.h>

int main(){
    int n, primo;
    unsigned int number;

    scanf("%d", &n);

    primo = 1;
    for(int i = 0; i < n; i++){
        scanf("%u", &number);

        if(number == 0 || number == 1){
            printf("%u nao eh primo\n", number);
        }
        else{
            for(int j = 2; j * j <= number; j++){
                if(number % j == 0){
                    printf("%u nao eh primo\n", number);
                    primo = 0;
                    break;
                }
            }
            if(primo){
                printf("%u eh primo\n", number);
            }
        }
        primo = 1;
    }

    return 0;
}