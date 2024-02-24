#include <stdio.h>

#define CURRENT_YEAR 2024

int main()
{
    int current_age;
    int birth;
    printf("please, type your age: ");
    scanf("%d", &current_age);

    birth = CURRENT_YEAR - current_age;

    printf("your birth year is %d\n", birth);

    return 0;
}