#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        printf("%02d %02d\n", i, num - i + 1 );
    }

    return 0;
}