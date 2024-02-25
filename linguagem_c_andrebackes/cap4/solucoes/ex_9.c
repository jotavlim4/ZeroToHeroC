#include <stdio.h>

int main()
{
    double height, weight;

    printf("please type you HEIGHT and WEIGHT: ");
    scanf("%lf %lf", &height, &weight);

    if(height < 1.2l)
    {
        if(weight <= 60.0l)
            printf("A\n");
        else if(weight > 60.0l && weight <= 90.0l)
            printf("D\n");
        else
            printf("G\n");
    }
    else if(height >= 1.2l && height <= 1.7l)
    {
        if(weight <= 60.0l)
            printf("B\n");
        else if(weight > 60.0l && weight <= 90.0l)
            printf("E\n");
        else
            printf("H\n");        
    }
    else
    {
        if(weight <= 60.0l)
            printf("C\n");
        else if(weight > 60.0l && weight <= 90.0l)
            printf("F\n");
        else
            printf("I\n");      
    }

    return 0;
    
}