#include <stdio.h>

int is_alpha(char c) {
    return ('A' <= c && c <= 'Z' || 'a' <= c && c <= 'z');
}

int main() {

    while(1) { //encerra com CTRL+C
        char ch;    
        printf("Digite um caracter: ");
        scanf(" %c", &ch);
        if(is_alpha(ch))
            printf("É alpha!\n");
        else
            printf("Não é alpha!\n");
        
    }
}