#include <stdio.h>

int main() {
    int horas;
    long resultado;
    char conversao;

    printf("Digite o valor em horas a ser convertido: ");
    scanf("%d", &horas); getchar();

    printf("Digite a conversão(minutos/segundos/decimos): ");
    conversao = getchar();

    switch(conversao){
        case 'm':
        case 'M': resultado = horas < 0 ? 0 : horas * 60l; break;

        case 's':
        case 'S': resultado = horas < 0 ? 0 : horas * 3600l; break;

        case 'd':
        case 'D': resultado = horas < 0 ? 0 : horas * 36000l; break;

        default: resultado = 0;
    }

    if(resultado)
        printf("%d hora(s) é(são) igual(is) a %ld %c\n", horas, resultado, conversao);
    else
        printf("Valor inválido!\n");

    return 0;
}
