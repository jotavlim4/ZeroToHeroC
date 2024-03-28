#include <stdio.h>

int main(){
    int t, n; 
    int r, q;

    while(scanf("%d", &t) != 0){
        for(int i = 0; i < t; i++){
            scanf("%d", &n);

            r = n % 4;
            q = n / 4;

            if(q % 2 == 0){
                q += 1;
                r -= 1;
            }
            printf("%d\n", (n - r) * 2 + r);
        }
    }

    return 0;
}