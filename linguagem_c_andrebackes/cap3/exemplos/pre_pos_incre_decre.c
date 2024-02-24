#include <stdio.h>

int main()
{
    int x, y, res;

    x = 10;
    y = 20;

    //incremento/decremento usado sozinhos:

    x++;
    y--;
    printf("pós-incremento de x = %d\n", x); //11
    printf("pós-decremento de y = %d\n", y); //19
    putchar('\n');
    ++x;
    --y;
    printf("pré-incremento de x = %d\n", x); //12
    printf("pré-decremento de y = %d\n", y); //18
    putchar('\n');
    //incremento usado com atribuiçao:

    //equivale a:
    // x = x + 1;
    // res = x;
    res = ++x;
    printf("resultado = %d\nvalor de x = %d\n", res, x); //13 e 13
    putchar('\n');
    //equivale a:
    //res = x;
    //x = x + 1;
    res = x++;
    printf("resultado = %d\nvalor de x = %d\n", res, x);//13 e 14
    putchar('\n');
    //decremento usado com atribuiçao:

    //equivale a:
    // y = y - 1;
    // res = y;
    res = --y;
    printf("resultado = %d\nvalor de y = %d\n", res, y); //17 e 17
    putchar('\n');
    //equivale a:
    //res = y;
    //y = y + 1;
    res = y--;
    printf("resultado = %d\nvalor de y = %d\n", res, y);//17 e 16
    putchar('\n');
    return 0;   
}