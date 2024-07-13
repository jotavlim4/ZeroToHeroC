#include <stdio.h>

char *str_cpy(char *dest, char *orig) {
    int i = 0;
    
    while(dest[i] = orig[i])
        i++;
    
    return dest;
}

int main() {
    char str1[] = "João Victor é muito legal!";
    char str2[100];
    
    str_cpy(str2, str1);
    
    puts(str2);

    return 0;
}

/*
Funcionamento dessa implementação:

Note primeiramente que a condição do loop while não está avaliando se
dest[i] == orig[i].

Nós estamos fazendo, literalmente, uma atribuição na condição.
Isso funcioção pois a operação de atribuição além de atribuir, 
retorna esse valor. Como qualquer coisa que não seja zero tem valor 
de verdadeiro, a condição é avaliada como verdadeira e o i++ é executado.

Quando o delimitador '\0' é atribuido a dest[i], esse valor é devolvido.
Como o valor para '\0' é o próprio zero a condição é avaliada com falsa
e o loop while é finalizado.

Dessa forma, fazemos a copia de todos os elementos de orig para dest de forma
correta.
*/