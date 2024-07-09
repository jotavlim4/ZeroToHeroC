#include <stdio.h>

int main() {
    char nome[101];
    
    printf("Digite o nome completo: ");
    fgets(nome, 101, stdin); //'\n' é lido e incluso na strings.
    printf("Nome completo: %s\n ", nome);
    
    return 0;
}

/*
Funcionamento:

A fgets pede como parametro:

-um vetor para armazenar a string.
-o tamanho máximo de valores que serão lidos.
-a entrada padrão, por enquanto, sempre 'stdin'

A função fará a leitura até que o primeiro ocorra:

-encontre um \n
-chegue até o tamanho máximo que será lido.

Tudo será armazenado na variável passada como argumento
inclusive o '\n'. Para não ter problemas, precisamos
remover esse elemento da string.


*/