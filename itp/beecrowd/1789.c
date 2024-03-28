#include <stdio.h> 
int main(){
    int l, v;
    int maior, nivel;
    
    while((scanf("%d", &l)) != EOF){
        maior = 0;

        for(int i = 0; i < l; i++){
            scanf("%d", &v);    
            if(maior < v){
                maior = v;
            }
        }
                
        if(maior < 10){
            nivel = 1;
        }
        else if(maior >= 10 && maior < 20){
            nivel = 2;
        }
        else{
            nivel = 3;
        }  
        printf("%d\n", nivel);
            
    }
    return 0;
}