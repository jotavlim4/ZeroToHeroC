#include <stdio.h>

int cubo(int x){
    return x * x * x;
}


int main() {
    int a;
    scanf("%d", &a);
    printf("%d\n", cubo(a));
    return 0;
}