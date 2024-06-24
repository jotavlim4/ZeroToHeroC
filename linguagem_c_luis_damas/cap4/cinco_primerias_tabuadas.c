#include <stdio.h>

int main() {
    int num;

    num = 1;
    while(num <= 5) {
        int i;

        i = 1;
        while(i <= 10) {
            printf("%2d * %2d = %2d\n", num, i, num * i);

            i = i + 1;
        }
        putchar('\n');

        num = num + 1;
    }

    return 0;
}