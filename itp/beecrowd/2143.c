#include <stdio.h>

int main(){
    int t, n; 
    int total_order;
    
    while(1){
        scanf("%d", &t); if(t == 0) break;
        for(int i = 0; i < t; i++){
            scanf("%d", &n);

            if(n % 2 == 0){
                total_order = (n - 2) * 2 + 2;
                printf("%d\n", total_order);
            }
            else{
                total_order = (n - 1) * 2 + 1;
                printf("%d\n", total_order);
            }
        }
    }

    return 0;
}