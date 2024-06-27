#include <stdio.h>

int main() {
    int i, num;

    for(num = 1; num <= 5; num = num + 1) {
        for(i = 1; i <= 10; i = i + 1) {
            printf("%2d * %2d = %2d\n", num, i, num * i);
        }
        putchar('\n');
        if(num != 5) {
            printf("Digite <ENTER> para continuar...");
            getchar();
        }
    }
    
    return 0;
}