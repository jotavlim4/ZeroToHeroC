#include <stdio.h>

int main()
{
    int age;

    printf("enter your age: ");
    scanf("%d", &age);

    if(age >= 5 && age <= 7)
        printf("Infantil A\n");
    else if(age > 7 && age <= 10)
        printf("Infantil B\n");
    else if(age > 10 && age <= 13)
        printf("Juvenil A\n");
    else if(age > 13 && age <= 17)
        printf("Juvenil B\n");
    else if(age > 17)
        printf("Sênior\n");
    else
        printf("invalid age... try again!\n");
    return 0;

}           