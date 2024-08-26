#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMS 49
#define MIN_AP 6
#define NUM_LIN 7

//produz sementes baseadas no relogio do computador,
//para gerar números aleatórios com a função rand
//quando está for chamada.
void start_random()
{
    long clock_time;

    time(&clock_time);
    srand((unsigned) clock_time);
}

//o vetor v será usado para controlar os números que já foram sugeridos
//na aposta, números já sorteados serão carregados com 1.
void start(int *v)
{
    for(int i = 0; i < NUMS; i++)
        v[i] = 0;
}

//Só vai parar de pedir números quando digitarmos um valor que está
//entre 6 <= x <= 49
int read_nums_bet()
{
    int n;
    do
    {
        puts("Digite a quantidade de números que deseja apostar (0 - ENCERRAR):");
        scanf("%d", &n);
    } while((n < MIN_AP || n > NUMS) && n != 0);

    return  n;
}

//vai gerar um número aletório e preencher a posição correspondente
//no vetor v com 1 para marcar aquele número como selecionado.
void generate_random_number(int *v, int n)
{
    int i, index;
    for(i = 0; i < n; i++)
    {
        index = rand() % NUMS; //vai gerar números aleatórios entre 0 e NUMS-1
        if(v[index] == 0)
            v[index] = 1; //significa que esse número não foi escolhido
        else
            i--; //caso contrário, decrementamos para tentar novamente
                 //fazemos isso até que n números tenham sido escolhidos.
    }
}

//vai mostrar os indices onde no indice i do vetor res
//não esteja preenchido com 1.
//caso contráruo vai mostrar xx, indicando que aquele número
//foi sugerido para a aposta.
void show_bets(int *res)
{
    int i;
    for(i = 0; i < NUMS; i++)
    {
        if(res[i] == 0)
            printf(" %2d ", i + 1);
        else
            printf(" ** ");

        if((i + 1) % NUM_LIN == 0)
            putchar('\n');
    }
}

int main()
{
    int vec[NUMS];
    int num_bet;

    start_random();
    while (1)
    {
        start(vec);
        if((num_bet = read_nums_bet()) == 0)
            break;
        generate_random_number(vec, num_bet);
        show_bets(vec);
    }
    return 0;
}
