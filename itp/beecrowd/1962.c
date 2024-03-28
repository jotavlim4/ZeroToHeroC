#include <stdio.h>
#include <math.h>

int main(){
    int n, t ,a;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &t);
        
        a = t - 2015;

        if(a >= 0){
            printf("%d A.C.\n", a + 1);
        }
        else{
            printf("%d D.C.\n", -a);
        }
    }

    return 0;
}