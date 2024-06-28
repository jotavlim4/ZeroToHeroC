#include <stdio.h>

int is_upper(char c) {
    return ('A' <= c && c <= 'Z');
}

char to_lower(char c) {
    if(is_upper(c))
        return c + ('a' - 'A');
    else
        return c;
}

int main() {
    while(1){    
        char ch;
        printf("Digite uma letra: ");
        scanf(" %c", &ch);

        printf("%c\n", to_lower(ch));
    }   

}