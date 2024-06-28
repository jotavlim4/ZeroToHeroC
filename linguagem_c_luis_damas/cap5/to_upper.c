#include <stdio.h>

int is_lower(char c) {
    return ('a' <= c && c <= 'z');
}

char to_upper(char c) {
    if(is_lower(c))
        return c - ('a' - 'A');
    else
        return c;
}

int main() {
    while(1){    
        char ch;
        printf("Digite uma letra: ");
        scanf(" %c", &ch);

        printf("%c\n", to_upper(ch));
    }   
    return 0;
}