#include <stdio.h>
#include <string.h>

#define TRUE "<TRUE>"
#define FALSE "<FALSE>"

int str_pal(char *s) {
    int i, j;
    
    for(i = 0, j = strlen(s) - 1; i < j; i++, j--)
        if(s[i] != s[j])
            return 0;
            
    return 1;
}

int main() {

    printf("'Ana'       -> %s\n", str_pal("Ana") == 1 ? TRUE : FALSE);
    printf("'m'         -> %s\n", str_pal("m") == 1 ? TRUE : FALSE);
    printf("'ababababa' -> %s\n", str_pal("ababababa") == 1 ? TRUE : FALSE);
    printf("'Esse'      -> %s\n", str_pal("Esse") == 1 ? TRUE : FALSE);
    printf("'esse'      -> %s\n", str_pal("esse") == 1 ? TRUE : FALSE);


    return 0;
}

/*

Aqui comparamos os caracteres dois a dois. Começando as comparações
entre o primeiro e último, segundo e penúltimo e assim sucessivamente
até que comparamos a caracter na posicao x e x+1.

O loop for continuará enquanto eles forem iguais.  Se ocorrer pelo menos
uma vez caracteres diferentes o loop é interrompido e o valor 0 é retornado
para indicar que não são palimdromos.

Caso o loop finalize após todas a iterações possíves, significa que 
a string é palimdroma e 1 será retornado para indicar verdadeiro.
*/