#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2);

int main()
{   
    int xf, yf, xi, yi, vi, r1, r2;
    double dist;

    while(scanf("%d %d %d %d %d %d %d", &xf, &yf, &xi, &yi, &vi, &r1, &r2) != EOF)
    {
        dist = distance(xi, yi, xf, yf) + (vi * 1.5);        
        if(dist <= r1 + r2)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}

double distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow((double) x2 - x1, 2.0) + pow((double) y2 - y1, 2.0));
}
