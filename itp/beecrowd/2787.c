#include <stdio.h>

int main(){
    unsigned int l, c;
    unsigned int branco, preto;

    scanf("%u", &l);
    scanf("%u", &c);
    
    branco = 1;
    preto  = 0;
    if(l % 2 != 0 && c % 2 != 0){
        printf("%d\n", branco);
    }
    else if(l % 2 != 0 && c % 2 == 0){
        printf("%d\n", preto);
    }
    else if(l % 2 == 0 && c % 2 == 0){
        printf("%d\n", branco);
    }
    else{
        printf("%d\n", preto);
    }
    return 0;
}