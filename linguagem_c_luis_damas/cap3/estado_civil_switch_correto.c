#include <stdio.h>

int main() {
    char estado_civil;

    printf("Qual é o seu estado civil: ");
    estado_civil = getchar();

    switch(estado_civil) {
        case 'c': //entra aqui, nao tem break, vai pro proximo case
        case 'C': printf("Você é casado!\n"); break;
        case 's': //entra aqui, nao tem break, vai pro proximo case
        case 'S': printf("Você é solteiro!\n"); break;
        case 'u': //entra aqui, nao tem break, vai pro proximo case
        case 'U': printf("Você esta em união estável\n"); break; 
        case 'd': //entra aqui, nao tem break, vai pro proximo case
        case 'D': printf("Você é divorciado!\n"); break; 
        case 'v': //entra aqui, nao tem break, vai pro proximo case
        case 'V': printf("Você é viuvo!\n"); break;
        default: printf("Estado civil inválido!\n"); break;
        //nao precisa por o break apos o default (ou ultimo case caso o 
        //default nao seja usado) pois o que vem apos
        //é a chave de encerramento do switch.
    }

    return 0;
}