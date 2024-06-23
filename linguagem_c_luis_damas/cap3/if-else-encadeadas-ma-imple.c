#include <stdio.h>

int main() {
    int a, b;
    
    printf("Introduza dois números: ");
    scanf("%d%d", &a, &b);

    //0 else pertecen ao ultimo if que existe,
    //logo o else da linha 15 é executando quando a
    //condição 'b > 10' é falsa e não quando a < 0.

    if( a >= 0)
        if(b > 10)
            printf("B é muito grande.\n");
    else
        printf("A tem um valor negativo.\n");

    return 0;
}

/*
correção:

if(a >=0) {
    if(b > 0)
        printf("B é muito grande. \n");
}
else
    printf("A tem um valor negativo.\n");

*/