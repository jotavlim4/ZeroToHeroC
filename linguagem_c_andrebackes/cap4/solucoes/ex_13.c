#include <stdio.h>

int main()
{
    int choice;
    int x, y, op;

    printf("please, choose one of the following options: \n");
    printf("(1) for '+'\n");
    printf("(2) for '-'\n");
    printf("(3) for '*'\n");
    printf("(4) for '\\'\n");
    printf("your choice... ");
    scanf("%d", &choice);
    
    printf("now, type two number: ");
    scanf("%d %d", &x, &y);

    switch(choice)
    {
    case 1:
        op = x + y;
        printf("%d + %d = %d\n", x, y, op);
        break;
    case 2:
        op = x - y;
        printf("%d - %d = %d\n", x, y, op);
        break;
    case 3:
        op = x * y;
        printf("%d * %d = %d\n", x, y, op);
        break;
    case 4:
        op = x / y;
        printf("%d / %d = %d\n", x, y, op);
        break;
    default:
        printf("invalid choice, try again\n");
        break;
    }
    return 0;
}