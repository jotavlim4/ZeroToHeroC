#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Digite uma data(dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    

    switch(mes){
        //mes com 28 ou 29 dias, depende do ano ser bissexto ou não.
        case 2: 
            if (1 <= dia && dia <= 28 + (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)))
                printf("Data válida!\n");
            else
                printf("Data inválida\n");
            break;
        //meses com 30 dias
        case 4: 
        case 6:
        case 9:
        case 11:
            if(1 <= dia && dia <= 30)
                printf("Data válida!\n");
            else
                printf("Data inválida!\n");
            break;
        default:
            if(mes < 1 || mes > 12)
                printf("Data inválida!\n");
            //meses com 31 dias
            else
                printf("Data válida!\n");
    }
    
    return 0;
}


/*
(ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0))

esse trecho vai ser igual a 1, se o ano for bissexto ou 
igual a zero caso não seja.

portanto em anos bissextos teremos:

if (1 <= dia && dia <= 28 + 1)

em anos não bissextos teremos:

if (1 <= dia && dia <= 28 + 0)
*/