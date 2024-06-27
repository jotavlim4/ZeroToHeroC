#include <stdio.h>

/*
trecho a ser reescrito como um while:

for(i = 1; i <= 20; i++)
    if(i == 10)
        continue;
    else
        printf("%d\n", i);

*/

int main() {
    int i;

    i = 1;
    while(i <= 20) {
        if(i == 10) {
            i++;
            continue;
        }
        else
            printf("%d\n", i);
        i++;
    }
}