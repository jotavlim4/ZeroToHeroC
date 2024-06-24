#include <stdio.h>

int main() {
    int i;

    i = 1;
    while(i <= 10) {
        printf("5 * %2d = %2d\n", i, 5 * i);
        i = i + 1;
    }

    return 0;
}