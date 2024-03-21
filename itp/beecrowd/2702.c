#include <stdio.h>

int main(){
    unsigned int frango_d, bife_d, massa_d;
    unsigned int frango_p, bife_p, massa_p;
    unsigned int total = 0;

    scanf("%u %u %u", &frango_d, &bife_d, &massa_d);
    scanf("%u %u %u", &frango_p, &bife_p, &massa_p);

    
    if(frango_d < frango_p){
        total = total + (frango_p - frango_d);
    }
    else{
        total += 0;
    }

    if(bife_d < bife_p){
        total = total + (bife_p - bife_d);
    }
    else{
        total += 0;
    }

    if(massa_d < massa_p){
        total = total + (massa_p - massa_d);
    }
    else{
        total += 0;
    }

    printf("%u\n", total);

    return 0;
}