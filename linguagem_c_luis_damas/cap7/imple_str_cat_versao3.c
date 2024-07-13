#include <stdio.h>
#include <string.h>

char *str_cat(char *dest, char *orig) {
    int i = 0, len = strlen(dest);
    
    while(dest[len] = orig[i]) {
        i++; len++;
    }
    
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

Ver explicação de 'imple_str_cpy_versao3.c

*/