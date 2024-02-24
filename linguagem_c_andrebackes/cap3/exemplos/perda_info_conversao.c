#include <stdio.h>

int main()
{
    int i = 303;
    char ch;
    float f = 24.1;
    //'ch' vai receber os 8 bits menos significativos de 'i'
    ch = i;
    //'i' vai receber apenas a parte inteira de 'f'
    i = f;

    printf("valor de 'ch': %d\n", ch);
    printf("valor de 'i': %d\n", i);

    return 0;
}