#include <stdio.h>

int main() {
    char nome[101];
    
    while(1) {
        puts("Digite um nome: ");
        gets(nome);
        //uma string com o primeiro elemento 
        //sendo o delimitador, significa que é
        //uma string vazia.       
        if(nome[0] == '\0') 
            break;
            
        else
            printf("Nome digitado: %s\n", nome);
    }
    
    return 0;
}