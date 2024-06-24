#include <stdio.h>

int main() {
    int mes, dias = 0;

    printf("Digite um mês(1-12): ");
     scanf("%d", &mes);

    switch(mes){
        //31 dias:
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10:
        case 12:
        case 1: dias =  dias + 1;        
        //30 dias
        case 4:
        case 6:
        case 9: 
        case 11: dias =  dias + 2;
        //28 dias
        case 2: dias = dias + 28;     
    }
    
    printf("O mês %d tem %d dias\n", mes, dias);

    return 0;
}