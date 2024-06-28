#include <stdio.h>

long int h_to_x(int h, char type){
    switch(type) {
        case 's':
        case 'S': h *= 60;

        case 'm':
        case 'M': h *= 60;

        case 'h':
        case 'H': h *= 1;
    }

    return h;    
}

int main(){
    printf("%6ld\n", h_to_x(3, 'h'));
    printf("%6ld\n", h_to_x(3, 'm'));
    printf("%6ld\n", h_to_x(3, 's'));
}