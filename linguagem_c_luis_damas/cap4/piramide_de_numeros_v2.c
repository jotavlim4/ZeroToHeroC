#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 10; i = i + 1) {
        for(j = 1; j <= 10; j = j + 1) {
            printf("%2d ", j);
            if(j == i)
                break;
        }
        putchar('\n');
    }
}