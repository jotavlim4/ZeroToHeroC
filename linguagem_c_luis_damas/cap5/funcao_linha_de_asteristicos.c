#include <stdio.h>

linha() {
    for(int i = 0; i < 20; i++)
        putchar('*');
    putchar('\n');
}

int main() {
    int i;

    linha();
    printf("Números entre 1 e 5\n");
    linha();

    for(int i = 1; i <= 5; i++)
        printf("%d\n", i);
    
    linha();

    return 0;
}