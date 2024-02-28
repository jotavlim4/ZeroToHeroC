#include <stdio.h>
 
int main() {
 
    int code, amount;
    double total;
    
    scanf("%d %d", &code, &amount);
    
    switch(code)
    {
        case 1:
            total = amount * 4.00;
            printf("Total: R$ %.2lf\n", total);
            break;
        case 2:
            total = amount * 4.50;
            printf("Total: R$ %.2lf\n", total);
            break;
        case 3:
            total = amount * 5.00;
            printf("Total: R$ %.2lf\n", total);
            break;
        case 4:
            total = amount * 2.00;
            printf("Total: R$ %.2lf\n", total);
            break;
        case 5:
            total = amount * 1.50;
            printf("Total: R$ %.2lf\n", total);
            break;
    }
 
    return 0;
}