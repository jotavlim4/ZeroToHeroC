#include <stdio.h>

int main()
{
    double price;
    int choice;

    printf("enter the desired price: ");
    scanf("%lf", &price);

    printf("now, choose one of the following option:\n");
    printf("(1) to MG\n");
    printf("(2) to SP\n");
    printf("(3) to RJ\n");
    printf("(4) to MS\n");
    printf("your choice... ");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        price = price + (0.07l * price);
        printf("your final price is R$%.2lf\n", price);
        break;
    case 2:
        price = price + (0.12l * price);
        printf("your final price is R$%.2lf\n", price);
        break;
    case 3:
        price = price + (0.15l * price);
        printf("your final price is R$%.2lf\n", price);
        break;        
    case 4:
        price = price + (0.08l * price);
        printf("your final price is R$%.2lf\n", price);
        break;    
    default:
        printf("invalid choice... try again!\n");
        break;
    }

    return 0;
}