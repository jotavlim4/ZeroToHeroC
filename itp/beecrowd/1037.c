#include <stdio.h> 

//([0,25], (25,50], (50,75], (75,100]) 
//Intervalo (25,50]
//Fora do intervalo

int main()
{
    double number;

    scanf("%lf", &number);

    if(number >= 0.0l && number <= 25.0l)
        printf("Intervalo [0,25]\n");
    
    else if(number > 25.0l && number <= 50.0l)
        printf("Intervalo (25,50]\n");
    
    else if(number > 50.0l && number <= 75.0l)
        printf("Intervalo (50,75]\n");
    
    else if(number > 75.0l && number <= 100.0l)
        printf("Intervalo (75,100]\n");
    
    else
        printf("Fora de intervalo\n");

    return 0;
}