#include <stdio.h>

int main(){
    unsigned int n;

    scanf("%u", &n);

    for(unsigned int i = 0; i < n; i++){
        i == n - 1 ? printf("Ho!\n") : printf("Ho ");
    }

    return 0;
}