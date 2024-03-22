#include <stdio.h>

int main(){
    int quantias, n;
    int coelhos, sapos, ratos;
    char cobaia;


    scanf("%d", &n);    

    coelhos = sapos = ratos = 0;
    for(int i = 0; i < n; i++){
        scanf("%d %c", &quantias, &cobaia);

        if(cobaia == 'C'){
            coelhos += quantias;
        }
        else if(cobaia == 'R'){
            ratos += quantias;
        }
        else{
            sapos += quantias;
        }
    }

    printf("Total: %d cobaias\n", coelhos + sapos + ratos);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf %%\n", (double) 100 * coelhos / (coelhos + sapos + ratos));    
    printf("Percentual de ratos: %.2lf\n %%", (double) 100 * ratos / (coelhos + sapos + ratos));
    printf("Percentual de sapos: %.2lf\n %%", (double) 100 * sapos / (coelhos + sapos + ratos));
    
    return 0;
}