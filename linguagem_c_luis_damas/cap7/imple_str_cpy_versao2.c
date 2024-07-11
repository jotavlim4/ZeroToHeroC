#include <stdio.h>

int str_len(char *v){
    int i = 0;
    
    while(v[i] != '\0')
        i++;
        
    return i;
}

char *str_cpy(char *dest, char *orig) {
    int i;
    
    for(i = str_len(orig); i >= 0; i--)
    
    return dest;
}

int main() {
    char str1[] = "João Victor";
    char str2[100];
    
    str_cpy(str2, str1);
    
    puts(str2);

    return 0;
}

/*
Essa implementação faz o caminho contrário. Ela começa copiando
o delimitador, uma vez que ele está na posicao str_len(orig). O
último caracter útil de orig está na posição str_len(orig) - 1.

Dessa forma todos os elementos são devidamente copiado. Note que
essa implementação precisa a saber o tamanho da string original
para que possa ser feita a copia de forma correta.


*/