#include <stdio.h>

int main() {
    int i;

    for(i = 1; i <= 10; i = i + 1)
        printf("%02d: %2d\n", i, 2 * i);

    return 0;
}