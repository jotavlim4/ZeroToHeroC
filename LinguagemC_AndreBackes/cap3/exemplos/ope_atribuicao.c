#include <stdio.h>

#define MY_CONST 11

const int my_const = 13;

int main()
{    
    int x = 10; //declara e atribui um valor a 'x'
    float y; //apenas declara 'y' como float
    int z, w;
    //agora, atribui um valor a 'y'
    y = 12.3;

    //atribui uma constate a 'z'  e a 'w' 
    z = MY_CONST;
    w = my_const;

    printf("x = %d\n", x);
    printf("y = %f\n", y);
    printf("z = %d\n", z);
    printf("w = %d\n", w);

    return 0;
}