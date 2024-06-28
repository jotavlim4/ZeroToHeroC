#include <stdio.h>

int is_square(int x, int y) {
    return x == y * y;
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", is_square(a, b));
    return 0;
}