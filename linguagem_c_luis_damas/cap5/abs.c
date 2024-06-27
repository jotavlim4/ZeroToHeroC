#include <stdio.h>

int abs(int x) {
    if (x >= 0)
        return x;
    else
        return -x;
}


int main() {
    int num;

    while(1) { //encerra com CTRL+C
        printf("Digite um número inteiro: "); scanf("%d", &num);
        printf("O valor absoluto de %d é %d\n", num, abs(num));
    }

    return 0;
}