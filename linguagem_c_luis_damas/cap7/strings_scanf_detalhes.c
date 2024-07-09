#include <stdio.h>

int main() {
    char nome[100];
    
    printf("Digite o seu nome completo: ");
    scanf("%s", nome); //vai ler apenas os caracteres até a primeira
                       //ocorrencia de <ESPACO>, <EMTER> ou <TAB>.
                       //vai armazenar os caracteres lidos em 'nome'
                       //e incluir o '\0'
    printf("Nome completo: %s\n", nome);
    
    return 0;
}