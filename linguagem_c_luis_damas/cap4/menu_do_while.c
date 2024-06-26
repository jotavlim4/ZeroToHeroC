#include <stdio.h>

int main() {
    char opcao;

    do {
        printf("\tM E N U  P R I N C I P A L\n");
        printf("\n\n\t\tClientes");
        printf("\n\n\t\tFornecedores");
        printf("\n\n\t\tEncomendas");
        printf("\n\n\t\tSair");
        printf("\n\n\t\tOpção: ");
        scanf(" %c", &opcao);
        fflush(stdin); //limpa o buffer

        switch(opcao) {
            case 'c':
            case 'C': puts("Opção CLIENTES\n"); break;

            case 'f':
            case 'F': puts("Opção FORNECEDORES\n"); break;

            case 'e':
            case 'E': puts("Opção ENCOMENDAS\n"); break;

            case 's':
            case 'S': break;

            default: puts("Opção inválida!\n"); 
        }
        getchar();
    }while(opcao != 'S' && opcao != 's');

    return 0;
}