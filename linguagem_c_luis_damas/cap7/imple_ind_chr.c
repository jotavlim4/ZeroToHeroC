#include <stdio.h>

int ind_chr(char *s, char ch) {
    int i;
    
    for(i = 0; s[i] != '\0'; i++)
        if(s[i] == ch)
            return i;
    
    return -1; 
}
//como zero é um possível indice, vamos retornar -1
//para os casos onde 'ch' não foi encontrado em 's'

int main() {
    char s[] = "Vanessa de Freitas Felgueiras";
    char ch = 'd';
    
    printf("A primera ocorrência de '%c' na string é no indice %d\n", ch, ind_chr(s, ch) + 1);
    
    return 0;
}