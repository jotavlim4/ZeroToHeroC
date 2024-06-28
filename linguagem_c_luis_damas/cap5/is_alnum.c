#include <stdio.h>

int is_alnum(char c) {
    return ('0' <= c && c <= '9' || 'a' <= c && c <= 'z' || 'A' <= c && c <= 'Z');
}

int main() {

    while(1) { //encerra com CTRL+C
        char ch;    
        printf("Digite um caracter: ");
        scanf(" %c", &ch);
        if(is_alnum(ch))
            printf("É alphanumérico!\n");
        else
            printf("Não é alphanumérico!\n");
        
    }
}