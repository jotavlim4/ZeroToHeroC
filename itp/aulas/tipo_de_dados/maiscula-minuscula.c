#include <stdio.h>

int main() {
    char letra;
    
    while(scanf("%c", &letra) != EOF){    //encerra com CTRL + D
        if('A' <= letra && letra <= 'Z' )
            printf("%c\n", letra + ('a' - 'A'));
    
        else
            printf("%c\n", letra);
    }
        
    return 0;
}