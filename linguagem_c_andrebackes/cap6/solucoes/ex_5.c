#include <stdio.h>

int main(){
    double numbers[8];
    int x, y, sum = 0;

    for(int i = 0; i < 8; i++){
        scanf("%lf", &numbers[i]);
    }

    printf("type two numbers x and y, such that  0 <= x,y < 8: ");
    scanf("%d %d", &x, &y);

    sum = numbers[x] + numbers[y];

    printf("n[%d] + n[%d] = %d\n", x, y, sum);

    return 0;
}