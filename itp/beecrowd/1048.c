#include <stdio.h> 

int main(){
    double salario, reajuste, percentual;

    scanf("%lf", &salario);

    if(salario > 0.0 && salario <= 400.0){
        percentual = 0.15;
        reajuste = salario * percentual;
        salario += reajuste;
    }
    else if(salario > 400.00 && salario <= 800.00){
        percentual = 0.12;
        reajuste = salario * percentual;
        salario += reajuste;
    }
    else if(salario > 800.00 && salario <= 1200.00){
        percentual = 0.1;
        reajuste = salario * percentual;
        salario += reajuste;
    }
    else if(salario > 1200.00 && salario <= 2000.00){
        percentual = 0.07;
        reajuste = salario * percentual;
        salario += reajuste;
    }
    else{
        percentual = 0.04;
        reajuste = salario * percentual;
        salario += reajuste;
    }

    printf("Novo salario: %.2lf\n", salario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual %.0lf %%\n", percentual * 100);

    return 0;
}