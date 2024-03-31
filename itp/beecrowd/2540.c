#include <stdio.h>

//entrada:
//n -> numero de jogadores do time
//n -> inteiros votos
//termina com EOF

int main(){
    int players;
    int yes; 
    int vote;
    int impeachment = 0;

    while(scanf("%d", &players) == 1){
        yes = 0;
        impeachment = 0;

        for(int i = 0; i < players; i++){
            scanf("%d", &vote);
            
            if(vote == 1){
                yes++;
            }

            if(yes >= ((2.0) / (3.0)) * players){
                printf("impeachment\n");
                impeachment = 1;
                break;
            }
        }

        if(!impeachment){
            printf("acusacao arquivada\n");
        }
    }
    return 0;
}