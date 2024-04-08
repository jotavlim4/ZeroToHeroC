#include <stdio.h>

int main()
{
    int n;

    while(scanf("%d", &n) != EOF)
    {
        long r, n_r, pos, attacked;
        int farm[n];
        int visited[n];

        attacked = r = n_r = pos = 0;

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &farm[i]);
            n_r += farm[i];
        }

        for(int i = 0; i < n; i++)
            visited[i] = 0;

        while(pos >= 0 && pos < n)
        {
            if(visited[pos] == 0)
            {
                attacked++;
                visited[pos]++;
            }

            int current_value = farm[pos];

            if(farm[pos] > 0)
            {
                r++;
                farm[pos]--;
            }


            if(current_value % 2 == 1)
                pos++;
            else
                pos--;

        }

        printf("%ld %ld\n", attacked, n_r - r);
    }

    return 0;
}