#include <stdio.h>

int main() {
    int mes, dias = 0;

    printf("Digite um mês(1-12): ");
     scanf("%d", &mes);

    if(mes == 1)
        dias = 31;
    else
        if(mes == 2) 
            dias = 28;
        else
            if(mes == 3)
                dias = 31;
            else
                if(mes == 4)
                    dias = 30; 
                else
                    if(mes == 5)
                        dias = 31;
                    else
                        if(mes == 6)
                            dias = 30;
                        else
                            if(mes == 7)
                                dias = 31;
                            else
                                if(mes == 8)
                                    dias = 31; 
                                else
                                    if(mes == 9)
                                        dias = 30;
                                    else
                                        if(mes == 10)
                                            dias = 31;
                                        else
                                            if(mes == 11)
                                                dias = 30;
                                            else
                                                if(mes == 12)
                                                    dias = 31;
                                                else
                                                    mes = 0; 

    if(mes)
        printf("O mês %d tem %d dias\n", mes, dias);
    else
        printf("Mês inválido!\n");

    return 0;
}