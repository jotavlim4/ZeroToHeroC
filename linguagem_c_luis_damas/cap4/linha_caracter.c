#include <stdio.h>

int main() {
    int line;
    char ch;

    printf("Enter the number of lines: ");
    scanf("%d", &line);

    printf("Enter a char: ");
    scanf(" %c", &ch);

    for(int i = 0; i < line; i++) {
        for(int j = 0; j < line; j++) {
            putchar(ch);
        }
        putchar('\n');
    }
    return 0;
}