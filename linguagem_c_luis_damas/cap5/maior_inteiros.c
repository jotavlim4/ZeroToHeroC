#include <stdio.h>

/* 
int maior(int x, int y){
    return x > y ? x : y;
}    
 */

int maior(int x, int y) {
    if (x > y)
        return 1;
    else
        if (x == y)
            return -1;
        else
            return 0;
}
//a funcao tem 3 returns mais só é possível um ser executado.
//ou seja, uma funcao poder ter n returns, mas apenas um pode
//ser executado.
int main() {
    printf("1 > 2? %d\n", maior(1, 2));
    printf("1 == 1? %d\n", maior(1, 1));
    printf("7 > 2? %d\n", maior(7, 2));
    printf("4 > 20? %d\n", maior(4, 20));

    return 0;
}