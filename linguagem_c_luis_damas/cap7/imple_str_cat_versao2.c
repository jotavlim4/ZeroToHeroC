#include <stdio.h>
#include <string.h>

char *str_cat(char *dest, char *orig) {
    int i, len;
    
    for(i = 0, len = strlen(dest); orig[i] != '\0'; i++)
        dest[len + i] = orig[i];
        
    dest[len + i] = '\0';
    
    return dest;
}

int main() {
    char nome1[] = "Lima da Silva";
    char nome2[100] = "João Victor ";
    
    str_cat(nome2, nome1);
    
    puts(nome2);
    
    return 0;
}

/*

Funciona de modo semelhante a versão 1, exceto pelas variáveis de controle
de laço que iteramos apenas sobre 'i'.

*/