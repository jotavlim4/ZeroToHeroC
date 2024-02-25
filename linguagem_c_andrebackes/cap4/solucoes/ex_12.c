#include <stdio.h>

int main()
{
    int day;

    printf("enter a positive integer between 1 and 7(inclusive): ");
    scanf("%d", &day);

    switch(day)
    {
    case 1:
        printf("sunday\n");
        break;
    case 2:
        printf("monday\n");
        break;
    case 3:
        printf("tuesday\n");
        break;
    case 4:
        printf("wednesday\n");
        break;
    case 5:
        printf("thursday\n");
        break;
    case 6:
        printf("fryday\n");
        break;
    case 7:
        printf("saturday\n");
        break;
    default:
        printf("invalid number, try again!\n");
        break;
    }
    return 0;
}