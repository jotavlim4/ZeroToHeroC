#include <stdio.h>

#define TAM 100
#define SEP ", "

int strlen(char *s) {
    int i = 0;
    
    while(s[i] != '\0')
        i++;
        
    return i;
}

char *strcpy(char *dest, char *orig) {
    int i = 0;
    
    while(dest[i] = orig[i])
        i++;
    
    return dest;
}

char *strcat(char *dest, char *orig) {
    int i = 0, len = strlen(dest);
    
    while(dest[len++] = orig[i++]);
    
    return dest;
}


int main() {
    char nome[TAM + 1];
    char sobrenome[TAM + 1];
    char completo[2*TAM + 1];
    
    while(1) {
        printf("Digite seu nome: ");
        gets(nome);
        
        if(strlen(nome) == 0) break;
        
        printf("Digite seu sobrenome: ");
        gets(sobrenome);
        
        strcpy(completo, sobrenome);
        strcat(completo, SEP);
        strcat(completo, nome);
        strcat(completo, ".");
        
        puts(completo);
    }

    return 0;
}