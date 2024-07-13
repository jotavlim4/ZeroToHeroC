#include <stdio.h>

int str_countc(char *s, char c) {
    int i, count;
    
    for(i = count = 0; s[i] != '\0'; i++) 
        if(s[i] == c)
            count++;
    
    return count;
}

int main() {
    char s[] = "João Victor";
    char c = 'l';
    
    printf("Número de ocorrências de '%c' em '%s' é: %d\n", c, s, str_countc(s, c));
    
    return 0;
}