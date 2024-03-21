#include <stdio.h>

int main()
{
    long double p, patinhos;

    while(1){
        scanf("%Lf", &p);
        
        if(p < 0){
            break;
        }
        else{
            if(p != 0.0){
                patinhos = p - 1;
                printf("%.0Lf\n", patinhos);
            }
            else{
                patinhos = p;
                printf("%.0Lf\n", patinhos);
            }
        }
    }

    return 0;
}