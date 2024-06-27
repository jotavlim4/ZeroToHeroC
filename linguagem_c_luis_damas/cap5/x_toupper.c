#include <stdio.h>

int x_toupper(char ch) {
    if( 'a' <= ch && ch <= 'z')
       return ch -=32;
    else
        return ch; 
}

int main() {
    int ch;
    while(1) {
        ch = getchar();
        putchar(x_toupper(ch));
    }
    return 0;
}