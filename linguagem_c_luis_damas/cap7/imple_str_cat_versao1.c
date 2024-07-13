#include <stdio.h>
#include <string.h>

char *str_cat(char *dest, char *orig) {
    int i, len;
        
    for(i = 0, len = strlen(dest); orig[i] != '\0'; i++, len++)
        dest[len] = orig[i];
        
    dest[len] = '\0';
    
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

Vamos analizar o código:

for(i = 0, len = strlen(dest); orig[i] != '\0'; i++, len++)
        dest[len] = orig[i];
        
Inicializamos 'len' com o tamanho da string 'dest', pois na posicao len = strlen(dest)
está o delimitador. Então executamos a operação de atribuição até chegar ao
delimitador da string que está sendo posta ao final de 'dest', ou seja, a string
'orig'.

Quando chegar nesse ponto, copiamos o delimitador para a última posição
da string 'dest'.

    dest[len] = '\0';


*/