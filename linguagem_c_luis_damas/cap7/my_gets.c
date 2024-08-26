#include <stdio.h>

#define MAX 100

char *myget(char *s)
{
    int i = 0;
    char c;
    while((c = getchar()) != '\n')
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return s;
}

int main()
{
    char my_string[MAX];
    myget(my_string);
    printf("%s\n", my_string);
    return 0;
}
