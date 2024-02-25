#include <stdio.h>

int main()
{
    double height, weight;
    char gender;

    printf("please, type your gender...\nM/m for *Male*\nF/f for *Female*\n");
    scanf("%c", &gender);
    
    printf("now, type your height: ");
    scanf("%lf", &height);

    switch(gender)
    {
    case 'M':
        weight = (72.7l * height) - 58.0l;
        printf("that is your ideal weight %.2lf\n", weight);
        break;
    case 'm':
        weight = (72.7l * height) - 58.0l;
        printf("that is your ideal weight %.2lf\n", weight);
        break;
    case 'F':
        weight = (62.1l * height) - 44.7l;
        printf("that is your ideal weight %.2lf\n", weight);
        break;
    case 'f':
        weight = (62.1l * height) - 44.7l;
        printf("that is your ideal weight %.2lf\n", weight);
        break;             
    default:
        printf("type a valid info!\n");
        break;
    }

    return 0;
}