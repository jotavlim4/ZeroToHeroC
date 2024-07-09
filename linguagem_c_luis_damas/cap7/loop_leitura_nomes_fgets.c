#include <stdio.h>

int main() {
    char nome[101];
    
    while(1) {
        puts("Digite um nome: ");
        fgets(nome, 101, stdin);
        //uma string com o primeiro elemento 
        //sendo o delimitador, significa que é
        //uma string vazia.
        if(nome[0] == '\0' || nome[0] == '\n')                  
            break;
        
        else
            printf("Nome digitado: %s\n", nome);
    }
    
    return 0;
}

/*
Usando o fgets é necessário incluir a condição "nome[0] == '\n'",
pois como fgets le e armazena a string até a ocorrencia do '\n'
armazenando-o inclusive. Consideramos uma string vazia aquela
cujo primeiro elemento [0] seja o '\n'


*/