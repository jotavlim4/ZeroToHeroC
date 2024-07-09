#include <stdio.h>

int str_len(char *s) {
    int i;
    
    i = 0;
    while(s[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char s[101];
    int len;
    
    printf("Digite uma frase: ");
    scanf("%[^\n]", s);
    
    len = str_len(s);
    
    printf("Tamanho da frase: %d\n", len);

    return 0;
}