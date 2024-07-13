#include <stdio.h>

int str_countd(char *s) {
    int i, count;
    
    for(i = count = 0; s[i] != '\0'; i++)
        if('0' <= s[i] && s[i] <= '9')
            count++;
    
    return count;
}

int main() {
    char s[] = "10 João Victor's incomodam muita gente, 11 João Victor's incomodam muito mais";
    
    printf("Número de ocorrências de digitos na string é: %d\n", str_countd(s));
    
    return 0;
}