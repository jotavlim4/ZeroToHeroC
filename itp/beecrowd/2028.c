#include <stdio.h>

int main()
{
    int N;
    int cs = 1;

    while(scanf("%d", &N) != EOF)
    {
        int i, j;
        int count, total, a; 

        a = 1;
        count = 1;
        total = 0;
        

        for(i = 0; i <= N; i++)
        {
            total = (a + i);
            a = total;
        }
    
        int vec[total];
        int k = 0;

        for(i = 0, j = 2; i <= N; i++)
        {
            if(i == 0)
            {   
                vec[k] = i; k++;
            }
            else if(i == 1)
            {
                vec[k] = i; k++;
            }
            else 
            {    
                while(count <= j)
                {
                    vec[k] = i;k++;
                    count++;
                }
                j++;
                count = 1;
            }
        }
        
        if(N == 0)
            printf("Caso %d: %d numero\n",cs, total);
        else
            printf("Caso %d: %d numeros\n",cs, total);
       
        for(i = 0; i < total; i++)
            i == total - 1 ? printf("%d\n", vec[i]) : printf("%d ", vec[i]);  
        
        printf("\n");
        cs++;
        
    }
    return 0;
}