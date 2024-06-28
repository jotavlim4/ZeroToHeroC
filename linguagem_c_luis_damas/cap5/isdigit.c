#include <stdio.h>

int isdigit(char c) {
    return ('0' <= c && c <= '9');
}

int main() {

    while(1) { //encerra com CTRL+C
        char ch;    
        printf("Digite um caracter: ");
        scanf(" %c", &ch);
        if(isdigit(ch))
            printf("É dígito!\n");
        else
            printf("Não é dígito!\n");
        
    }
}