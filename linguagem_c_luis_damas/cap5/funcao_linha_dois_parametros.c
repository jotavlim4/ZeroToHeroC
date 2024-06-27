#include <stdio.h>

linha(int num, char ch) {
    for(int i = 0; i < num; i++)
        putchar(ch);
    putchar('\n');
}

int main() {
    linha(3, '+');
    linha(5, '+');
    linha(7, '-');
    linha(5, '*');
    linha(3, '*');

    return 0;
}