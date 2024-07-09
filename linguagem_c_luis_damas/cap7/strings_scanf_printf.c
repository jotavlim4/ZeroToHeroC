#include <stdio.h>

int main() {
    char *nome = "João"; //vetor de tamanho 4 + 1, 4 caracteres úteis + delimitador '\0'
    char sobrenome[] = "Lima da Silva"; //mesma lógica do anterior.
    char genero[20];
    
    printf("Nome: %s\n", nome);
    printf("Sobrenome: %s\n", sobrenome);
    printf("Digite o gênero: ");
    scanf("%s", genero); //para leitura de strings usando o scanf não usamos o &, como nos demais tipos.
                         //faz a leitura de uma única palavra
                         //qualuqe <ESPACO>, <TAB>, <ENTER> inserido é ignorado e a leitura é
                         //interrompida.
    puts(genero); //funciona da mesma forma que o printf, execeto pelo '\n' que é automático.
    
    return 0;    
}