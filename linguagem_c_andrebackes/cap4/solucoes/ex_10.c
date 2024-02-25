#include <stdio.h>
#include <math.h>

#define QTD_NUM 3.0

int main()
{
    unsigned int num1, num2, num3, average;
    unsigned int choice;


    printf("please, enter three positive integers: ");
    scanf("%u %u %u", &num1, &num2, &num3);

    printf("now, enter which type of average you want calculate:\n");
    printf("(1) for geometryc.\n");
    printf("(2) for weighted.\n");
    printf("(3) for harmonic.\n");
    printf("(4) for arithmetic.\n");
    printf("your choice... ");
    scanf("%u", &choice);

    switch(choice)
    {
    case 1:
        average = pow(num1 * num2 * num3, 1 / QTD_NUM);
        printf("your geometryc average: %u\n", average);
        break;
    case 2:
        average = (num1 + (num2 * 2) + (num3 * 3)) / (2 * QTD_NUM);
        printf("your weighted average: %u\n", average);
        break;
    case 3:
        average = pow(1/num1 + 1/num2 + 1/num3, -1);
        printf("your harmonic average: %u\n", average);
        break;
    case 4:
        average = (num1 + num2 + num3) / QTD_NUM;
        printf("your airthmetic average: %u\n", average);
        break;
    default:
        printf("invalid choice, try again...\n");
        break;
    }

    return 0;
}