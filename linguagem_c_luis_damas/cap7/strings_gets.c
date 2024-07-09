#include <stdio.h>

int main() {
    char nome[100];
    
    printf("Digite o nome completo: ");
    gets(nome); //'\n' não é lido!!!!!
    printf("Nome completo: %s\n ", nome);
    
    return 0;
}

/*
Funcionamento da função gets:

Essa função permite a leitura de caracteres até a ocorrencia do <ENTER>.
Ou seja, tudo entre o primeiro caracter e a primeira ocorrencia de
<ENTER> é armazenado na variável e é posto '\0'


*/