#include <stdio.h>

int is_lower(char c) {
    return ('a' <= c && c <= 'z');
}

int main() {

    while(1) { //encerra com CTRL+C
        char ch;    
        printf("Digite um caracter: ");
        scanf(" %c", &ch);
        if(is_lower(ch))
            printf("É minúsculo!\n");
        else
            printf("Não é minúsculo!\n");
        
    }

}