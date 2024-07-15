#include <stdio.h>

char *str_delc(char *s, char ch)
{
    int i, j;

    for(i = j = 0; s[i] != '\0'; i++)
    {
        if(s[i] != ch)
            s[j++] = s[i];
    }
    s[j] = '\0';

    return s;
}

int main()
{
    char string[] = "João Victor Lima da Silva";

    puts(string);
    puts(str_delc(string, ' '));

    return 0;
}

