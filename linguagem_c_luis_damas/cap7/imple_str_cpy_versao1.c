#include <stdio.h>

char *str_cpy(char *dest, char *orig) {
    int i = 0;
    
    for(i = 0; orig[i] != '\0'; i++)
        dest[i] = orig[i];
    
    dest[i] = '\0';
    
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
Funcionamento dessa implementação de strcpy:

Usamos um laço for para copiar elemento a elemento da string
original para a string destino:

    for(i = 0; orig[i] != '\0'; i++)
        dest[i] = orig[i];
        
Quando o elemento da vez for '\0' significa que chegamos ao final
da string original e o laço for é interrompido. Note que o 'i' 
atual nos diz em que posição está o '\0' da string original. 
O próximo passo é portanto, colocar o delimitador na posicao 
correspondente na string destino. Fazemos isso nesse trecho: 

    dest[i] = '\0';
    
Desse modo a string original é corretamente copiada para a string
destino.

Finalizamos a função retornando destino.

*/