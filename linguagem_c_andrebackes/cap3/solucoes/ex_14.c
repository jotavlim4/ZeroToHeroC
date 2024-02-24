#include <stdio.h>

#define DISTANCE 32;

int main()
{
    char lowercase, capitalcase;

    printf("type a capitalcase letter: ");
    scanf("%c", &capitalcase);

    lowercase = capitalcase + DISTANCE;

    printf("The lowercase of '%c' is '%c'\n", capitalcase, lowercase);

    return 0;
}