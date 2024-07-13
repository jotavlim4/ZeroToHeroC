#include <stdio.h>
#include <string.h>

char *str_rev(char *s){
    int i, len;
    char aux;
    
    for(i = 0, len = strlen(s)-1; i < len; i++, len--) {
        aux = s[i];
        s[i] = s[len];
        s[len] = aux;
    }
    
    return s;
}

int main() {
    char str[] = "JOÃO VICTOR LIMA DA SILVA";

    printf("Original: %s\n", str);
    printf("Inverso: %s\n", str_rev(str));

    return 0;
}