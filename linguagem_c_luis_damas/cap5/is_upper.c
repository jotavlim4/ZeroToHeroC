#include <stdio.h>

int is_upper(char c) {
    return ('A' <= c && c <= 'Z');
}

int main() {

    while(1) { //encerra com CTRL+C
        char ch;    
        printf("Digite um caracter: ");
        scanf(" %c", &ch);
        if(is_upper(ch))
            printf("É maiúsculo!\n");
        else
            printf("Não é maiúsculo!\n");
        
    }
}