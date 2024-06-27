#include <stdio.h>

int main() {
    int number, i;

    printf("Type a integer: ");
    scanf("%d", &number);

    while(1){
        if(number % 10 == 0)
            break;
        else
            if(number % 3 == 0){
                number++;
                continue;
            }
            else {
                printf("%3d\n", number++);
            }
    }

    return 0;
}