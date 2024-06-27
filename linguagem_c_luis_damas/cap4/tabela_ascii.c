#include <stdio.h>

int main() {
    int i;

    for(i = 0; i < 256; i++){
        if(33 <= i && i <= 126)
            printf("%3d: %3c\n", i, (char) i);
        else
            continue;
    }
    return 0;
}