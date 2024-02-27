#include <stdio.h>

int main()
{
    int x;
    int sum = 0;

    printf("please, enter 10 numbers, and then press <ENTER> to see the sum.: ");
    
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &x);
        sum += x;
    }
    printf("the sum of the entered numbers is %d!\n", sum);

    return 0;
}