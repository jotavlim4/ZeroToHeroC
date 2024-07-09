#include <stdio.h>

int is_null(char *s) {
    return (s[0] == '\0');
}

int main() {
    char s[101];
    
    puts("Introduza uma frase: ");
    scanf("%[^\n]", s);
    
    puts("A string é vazia: ");
    if(is_null(s))
        puts("<TRUE>");
    else
        puts("<FALSE>");

    return 0;
}