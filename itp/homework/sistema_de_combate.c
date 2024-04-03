#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define PROB_HERO 0.6
#define PROB_INIM 0.45

int acertou(double prob)
{
    if((((rand() % 100) + 1) / 100.0) <= prob)
        return 1;
    else
        return 0;
}

void status(int vida_heroi, int vida_inimigo)
{
    printf("STATUS:\n");
    printf("*****\n");
    printf("Vida do herói: %d\n", vida_heroi);
    printf("Vida do inimigo: %d\n", vida_inimigo);
    printf("*****\n");
    printf("\n");
}

void vitoria(int vida_heroi, int vida_inimigo)
{
    if(vida_heroi == 0)
        printf("Fim de Jogo. Derrota!\n");
    else
        printf("Fim de Jogo. Vitória!\n");
}


int main()
{   
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int vida_h, ataque_h;
    int vida_i, ataque_i;

    srand(time(NULL));
    
    while(1)
    {
        printf("***\tCOMBATE SYSTEM :P***\t\n");

        printf("Digite a vida e o ataque do herói: ");
        scanf("%d %d", &vida_h, &ataque_h); getchar();

        printf("Digite a vida e o ataque do inimigo: ");
        scanf("%d %d", &vida_i, &ataque_i); getchar();
        
        putchar('\n');
        printf("Início do combate!\n");
        putchar('\n');
        while(vida_h > 0 && vida_i > 0)
        {
            printf("TURNO DO HERÓI: ");

            if(acertou(PROB_HERO))
            {
                printf("Acertou!\n");
                vida_i = vida_i - 2 * ataque_h;

                if(vida_i <= 0)
                {
                    vida_i = 0;
                    status(vida_h, vida_i);
                    break;
                }
                else
                    status(vida_h, vida_i);
            }
            else
            {
                printf("Errou o ataque!\n");
                status(vida_h, vida_i);
            }
            printf("TURNO DO INIMIGO: ");

            if(acertou(PROB_INIM))
            {
                printf("Acertou!\n");
                vida_h = vida_h - 2 * ataque_i;
                
                if(vida_h <= 0)
                {
                    vida_h = 0;
                    status(vida_h, vida_i);
                    break;
                }
                else
                    status(vida_h, vida_i);
            }
            else
            {
                printf("Errou o ataque!\n");
                status(vida_h, vida_i);
            }
        }
        vitoria(vida_h, vida_i);

        char fim;

        printf("Jogar novamente?[y/n]: ");
        scanf("%c", &fim);
            
        if(fim == 's' || fim == 'S')
            continue;
        else if(fim == 'n' || fim == 'N')
            break;

        putchar('\n');
    }
    return 0;
}