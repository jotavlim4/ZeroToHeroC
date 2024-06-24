#include <stdio.h>

int main() {
    int num, i;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    i = 1;
    while(i <= 10) {
        printf("%3d * %3d = %3d\n", num, i, num * i);   
        i = i + 1;
    }

    return 0;
}