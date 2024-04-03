#include <stdio.h>

int achieve(int dist, int vel1, int vel2)
{
    return dist / (vel1 - vel2);
}

int main()
{
    int v1, v2, x;

    while(scanf("%d %d %d", &x, &v1, &v2) != EOF)
    {
        if(v1 > v2)
            printf("%ds\n",achieve(x, v1, v2));
        else
            printf("impossivel");
    }
    return 0;
}