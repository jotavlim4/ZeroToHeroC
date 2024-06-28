#include <stdio.h>

long int h_to_x(int horas, char tipo) {
    if(tipo == 's' || tipo == 'S')
        return horas * 3600l;
    else 
        if(tipo == 'm' || tipo == 'M')
            return horas * 60l;
        else
            return horas;
}

int main(){
    printf("%6ld\n", h_to_x(3, 'h'));
    printf("%6ld\n", h_to_x(3, 'm'));
    printf("%6ld\n", h_to_x(3, 's'));

    return 0;
}