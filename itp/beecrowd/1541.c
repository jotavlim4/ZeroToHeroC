#include <stdio.h>
#include <math.h>

int main(){
    double A, B, C, l;

    while(1){
        scanf("%lf", &A); if(A == 0){break;} 
        scanf("%lf %lf", &B, &C);

        C = C / 100.0;

        l = sqrt((A * B) / C);
        printf("%.0lf\n", floor(l)); 
    }    
    return 0;
}