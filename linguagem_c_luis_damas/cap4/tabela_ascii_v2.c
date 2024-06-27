#include <stdio.h>

int main() {
    int ascii_code;
    char opcao;

    for(int i = 0, ascii_code = 0; ascii_code < 256; ascii_code++) {
        printf("%3d -> %3c\n", ascii_code, (char) ascii_code);

        if(i == 19) {
            do {
                printf("Digite 'C' ou 'c' para continuar e pressione <ENTER>: ");
                scanf(" %c", &opcao);
            } while(opcao != 'c' && opcao != 'C');
            i = 0;
        }
        else
            i++;
    }

    return 0;
}