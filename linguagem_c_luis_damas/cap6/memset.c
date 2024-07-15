#include <stdio.h>

char *memset(char *v, char ch, int n)
{
    int i;

    for(i = 0; i < n; i++)
        v[i] = ch;

    return v;
}

void print_vector(char *v, int n)
{
    for(int i = 0; i < n; i++)
        printf("%c ", v[i]);
    putchar('\n');
}

int main()
{
    char vector[10];

    memset(vector, 'a', 10);
    print_vector(vector, 10);


    return 0;
}