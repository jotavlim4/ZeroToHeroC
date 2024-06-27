#include <stdio.h>

long int n_seconds(int h) {
    return h < 0 ? 0 : h * 3600l;
}

int main() {
    for(int i = 0; i < 10; i++)
        printf("%5ld\n", n_seconds(i));
    
    return 0;

}