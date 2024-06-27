#include <stdio.h>

int main() {
    for(int i = 0; i < 19; i++)
        putchar('*');
    putchar('\n');

    printf("Números entre 1 e 5\n");

    for(int i = 0; i < 19; i++)
        putchar('*');
    putchar('\n');

    for(int i = 1; i <= 5; i++)
        printf("%d\n", i);

    for(int i = 0; i < 19; i++)
        putchar('*');
    putchar('\n');

    return 0;
}