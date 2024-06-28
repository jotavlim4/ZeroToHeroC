#include <stdio.h>

int is_space(char c) {
    return (c == ' ' || c == '\t');
}

int main() {

    while(1) { //encerra com CTRL+C
        char ch;    
        printf("Digite um caracter: ");
        scanf("%c", &ch); getchar();
        if(is_space(ch))
            printf("É espaço!\n");
        else
            printf("Não é espaço!\n");
        
    }
}