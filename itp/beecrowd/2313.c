#include <stdio.h>

int main(){
    unsigned int a, b, c;
    unsigned int A, B, C;

    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c){
        A = a;
        if(b > c){
            B = b;
            C = c;
        }
        else{
            B = c;
            C = b;
        }
    }
    else if(b > a && b > c){
        A = b;
        if(a > c){
            B = a;
            C = c;
        }
        else{
            B = c;
            C = a;
        }
    }
    else{
        A = c;
        if(b > a){
            B = b;
            C = a;
        }
        else{
            B = a;
            C = b;
        }
    }

    if(A >= B + C){
        printf("Invalido\n");
    }
    else{
        if(A != B && A != C  && B != C /*|| B != A && B != C && A != C|| C != A && C != B && A != B*/){
            printf("Valido-Escaleno\n");
            if(A*A == B*B + C*C){
                printf("Retangulo: S\n");
            }
            else{
                printf("Retangulo: N\n");
            }
        }
        else if((A == B || A == C) && (B != C) /*|| B == A || B == C || C == A || C == B*/){
            printf("Valido-Isoceles\n");
            if(A*A == B*B + C*C){
                printf("Retangulo: S\n");
            }
            else{
                printf("Retangulo: N\n");
            }
        }
        else if(A == B && A == C && B == C /*|| B == A && B == C  && A == C || C == A && C == B && A == B*/){
            printf("Valido-Equilatero\n");
            if(A*A == B*B + C*C){
                printf("Retangulo: S\n");
            }
            else{
                printf("Retangulo: N\n");
            }
        }
    }


    return 0;
}