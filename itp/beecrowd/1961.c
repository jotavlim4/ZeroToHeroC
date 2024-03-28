#include <stdio.h>

int main()
{
    int jump, pipes, pipe_height, next_height;
    int die;

    scanf("%d %d", &jump, &pipes);
    scanf("%d", &pipe_height);

    die = 0;
    for(int i = 1; i < pipes; i++){
        scanf("%d", &next_height);

        if(!(next_height - pipe_height >= -jump && next_height - pipe_height <= jump)){
            die = 1;
            break;
        }
        pipe_height = next_height;
    }
    if(!die){
        printf("YOU WIN\n");
    }
    else{
        printf("GAME OVER\n");
    }

    return 0;
}