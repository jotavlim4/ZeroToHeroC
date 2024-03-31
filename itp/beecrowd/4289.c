#include <stdio.h>

int contains(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    if((x3 > x1 && x3 < x2) && (x4 > x1 && x4 < x2) && (y3 > y1 && y3 < y2) && (y4 > y1 && y4 < y2))
        return -1;
    else if((x1 > x3 && x1 < x4) && (x2 > x3 && x2 < x4) && (y1 > y3 && y1 < y4) && (y2 > y3 && y2 < x4))
        return 1;
    else
        return 0;
}

int main()
{
    int x1, x2, y1, y2; //tela
    int x3, x4, y3, y4; //retangulo subsequente

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    while(1)
    {
        scanf("%d %d %d %d", &x3, &y3, &x4, &y4);
        if(x3 == 0 && x4 == 0 && y3 == 0 && y4 == 0) break;

        int relation;
        relation = contains(x1, y1, x2, y2, x3, y3, x4, y4);

        if(relation == -1)
           printf("(<%d.00,%d.00>,<%d.00,%d.00>) contem (<%d.00,%d.00>,<%d.00,%d.00>).\n", x1, y1, x2, y2, x3, y3, x4, y4);
        
        else if(relation == 1)
            printf("(<%d.00,%d.00>,<%d.00,%d.00>) contem (<%d.00,%d.00>,<%d.00,%d.00>).\n", x3, y3, x4, y4, x1, y1, x2, y2); 
        
        else
            printf("Nao posso afirmar!\n");
    }
    return 0;
}