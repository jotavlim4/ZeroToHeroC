#include <stdio.h>

int main() {
    int horas;
    long resultado;
    char conversao;

    printf("Digite o número de horas: ");
    scanf("%d", &horas); getchar();

    printf("Qual o resultado desejado(minutos/segundo/decimos): ");
    conversao = getchar();

    if(conversao == 'M' || conversao == 'm')
        resultado = horas < 0 ? 0 : horas * 60l;
    else
        if(conversao == 's' || conversao == 'S')
            resultado = horas < 0 ? 0 : horas * 3600l;
        else
            if(conversao == 'd' || conversao == 'D')
                resultado = horas < 0 ? 0 : horas * 36000l;
            else
                resultado = 0;
            

    if(resultado)
        printf("%d hora(s) é igual a %ld %c\n", horas, resultado, conversao);
    else
        printf("Resultado inválido!\n");

    return 0;       
}