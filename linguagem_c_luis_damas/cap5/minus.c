#include <stdio.h>

int minus(int x) {
    if(x > 0)
        return -x;
    else
        return x;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", minus(num));
    return 0;
}