#include <stdio.h>

int main() {
    double salario[12];
    double total = 0.0;
    
    for(int i = 0; i < 12; i++){
        printf("Digite o salário do mês %2d: ", i + 1);
        scanf("%lf", &salario[i]);
    }
    
    printf("MES\tVALOR\n");
    for(int i = 0; i < 12; i++) {
        printf("%3d\t%.2lf\n", i + 1, salario[i]);
        total += salario[i];
    }
    putchar('\n');
    printf("TOTAL: %.2lf\n", total);
    
    return 0;
}