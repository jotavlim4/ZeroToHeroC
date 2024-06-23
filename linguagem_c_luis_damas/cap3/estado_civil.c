#include <stdio.h> 

int main() {
    char estado_civil;

    printf("Digite seu estado civil: ");
    
    estado_civil = getchar();

    if(estado_civil == 'C' || estado_civil == 'c')
        printf("Você é casado!\n");
    else
        if(estado_civil == 'S' || estado_civil == 's')
            printf("Você é solteiro!\n");
        else
            if(estado_civil == 'U' || estado_civil == 'u')
                printf("Você está em união estável!\n");
            else
                if(estado_civil == 'V' || estado_civil == 'v')
                    printf("Você é viuvo!\n");
                else
                    printf("Estado civil inválido!\n");
    return 0;
}