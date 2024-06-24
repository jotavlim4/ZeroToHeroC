#include <stdio.h>

int main() {
    int mes, dias = 0;

    printf("Digite um mês(1-12): ");
     scanf("%d", &mes);

    switch(mes){
        case 1: dias = 31; break;
        case 2: dias = 28; break;
        case 3: dias = 31; break;
        case 4: dias = 30; break;
        case 5: dias = 31; break;
        case 6: dias = 30; break;
        case 7: dias = 31; break;
        case 8: dias = 31; break;
        case 9: dias = 30; break;
        case 10: dias = 31; break;
        case 11: dias = 30; break;
        case 12: dias = 31; break;
        default: mes = 0;
    }

    if(mes)
        printf("O mês %d tem %d dias\n", mes, dias);
    else
        printf("Mês inválido!\n");

    return 0;
}