#include <stdio.h>

int main()
{
    int n, m;

    while(1)
    {   
        scanf("%d %d", &n, &m);
        
        if(n == 0 && m == 0) 
            break;

        int bills[6] = {2, 5, 10, 20, 50, 100};
        int possible;

        possible = 0;
        
        for(int i = 0; i < 6; i++)
        {
            for(int j = i; j < 6; j++)
            {
                if((m - n) == (bills[i] + bills[j]))
                {        
                    possible = 1;
                    break;
                }
                if(possible)
                    break;
            }
        }
        if(possible)
            printf("possible\n");
        else
            printf("impossible\n");
    }
    return 0;
}