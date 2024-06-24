#include <stdio.h>

int main() {
    int horas;
    long resultado;
    char conversao;

    printf("Digite o valor em horas a ser convertido: ");
    scanf("%d", &horas); getchar();

    printf("Digite a conversão(minutos/segundos/decimos): ");
    conversao = getchar();

    resultado = horas;

    switch(conversao){
        case 'd':
        case 'D': resultado = resultado * 10;

        case 's':
        case 'S': resultado = resultado * 60;

        case 'm':
        case 'M': resultado = resultado * 60;
    }

    if(resultado)
        printf("%d hora(s) é(são) igual(is) a %ld %c\n", horas, resultado, conversao);

    return 0;
}

/*

Nessa solução sem 'break'
A variável 'resultado' serve com acumulador.

Logo se a conversao escolhida for 'decimos'

ou case entrará em 'd' ou 'D' e o valor armazenado em resultado
será acumulado até o final do switch.

O acumulo depende do case que é equivalente.

*/
