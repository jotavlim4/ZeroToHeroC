#include <stdio.h>

int main() {
    int num;

    while(1) {
        printf("Digite um número: ");
        scanf("%d", &num); if(!(num < 1 || num > 100)) break;

    }

    return 0;   
}