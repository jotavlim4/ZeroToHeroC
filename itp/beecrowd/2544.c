#include <stdio.h>

int main(){
    int ninja;
    int jutsu;

    while(scanf("%d", &ninja) != EOF)
    {   
        jutsu = 0;
        while(ninja != 0)
        {
            if(ninja / 2 > 0)
                jutsu++;
        
            ninja /= 2;
        }
        printf("%d\n", jutsu); 
    }

    return 0;
}