#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 10; i = i + 1) {
        for(j = 1; j <= i; j = j + 1) {
            j == i ? printf("%2d\n", j) : printf("%2d ", j);
        }
    }

    return 0;
}