#include <stdio.h>

#define MAX 100

char *strset(char *s, char ch){
    int i = 0;
    while(s[i] != '\0')
    {
        s[i++] = ch;
    }
    return s;
}

int main(){
    char my_string[MAX] = "João Victor Lima da Silva";

    strset(my_string, '!');
    printf("%s\n", my_string);

    return 0;
}
