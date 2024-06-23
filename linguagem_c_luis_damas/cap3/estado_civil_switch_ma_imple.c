#include <stdio.h>

int main() {
    char estado_civil;

    printf("Qual é o seu estado civil: ");
    estado_civil = getchar();

    switch(estado_civil) {
        case 'C': printf("Você é casado!\n");
        case 'S': printf("Você é solteiro!\n");
        case 'U': printf("Você esta em união estável\n");
        case 'D': printf("Você é divorciado!\n");
        case 'V': printf("Você é viuvo!\n");
        default: printf("Estado civil inválido!\n");
    }

    return 0;
}