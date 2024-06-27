#include <stdio.h>

int main() {
    int inicial, final, i;
    char opcao;

    printf("Digite dois números inteiros: ");

    for(i= 0, scanf("%d %d", &inicial, &final) ; inicial <= final; inicial++) {
        printf("%3d -> %3c\n", inicial, (char) inicial);

        if(i == 19) {
            do{
                printf("Digite 'c' ou 'C' para continuer e pressione <ENTER>: ");
                scanf(" %c", &opcao);
            } while(opcao != 'c' && opcao != 'C');
            i = 0;
        }
        else
            i++;
    }
    return 0;
} 