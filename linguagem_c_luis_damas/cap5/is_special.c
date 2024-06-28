#include <stdio.h>

int is_special(int x) {
    return (2 * x == x * x);
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%d\n", is_special(a));
    return 0;
}