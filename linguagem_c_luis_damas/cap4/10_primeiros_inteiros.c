#include <stdio.h>

int main() {
    int count = 0;
    //ou igual a 1

    //aqui seria <= 10
    while(count < 10){
        printf("%d\n", count + 1);
        count = count + 1;
    }

    return 0;
}