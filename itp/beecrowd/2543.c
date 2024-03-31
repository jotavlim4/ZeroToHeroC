#include <stdio.h>

int main(){
    int gameplays;
    int your_iD, iD;
    int game;
    int count;

    
    while(scanf("%d %d", &gameplays, &your_iD) != EOF)
    {
        count = 0;
        
        for(int i = 0; i < gameplays; i++)
        {
            scanf("%d %d", &iD, &game);

            if(game == 0 && iD == your_iD)
                count++;
        }

        printf("%d\n", count);
    }
    return 0;
}