#include <stdio.h>

long int h_to_x(int horas, char tipo) {
    switch(tipo) {
        case 's':
        case 'S': return horas < 0 ? 0 : horas * 3600l;

        case 'm':
        case 'M': return horas < 0 ? 0 : horas * 60l;

        case 'h':
        case 'H': return horas;
    }
}

int main(){
    printf("%6ld\n", h_to_x(3, 'h'));
    printf("%6ld\n", h_to_x(3, 'm'));
    printf("%6ld\n", h_to_x(3, 's'));

    return 0;
}