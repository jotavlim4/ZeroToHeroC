#include <stdio.h>

#define QTD_NOTAS 7

void bubble_sort(int l, double v[l]) {
    for(int i = 0; i < l - 1; i++) {
        for(int j = 0; j < l - i - 1; j++) {
            if(v[j] > v[j + 1]) {
                double temp;

                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    while(scanf("%d", &n) != EOF) {
       
       for(int i = 0; i < n; i++) {
            double total = 0;
            double notas_partida;
            double notas[QTD_NOTAS];
            char competidor[100];


            scanf("%s", competidor);
            scanf("%lf", &notas_partida);

            for(int j = 0; j < QTD_NOTAS; j++)
                scanf("%lf", &notas[j]);

            bubble_sort(QTD_NOTAS, notas);

            for(int k = 1; k < QTD_NOTAS - 1; k++)
                total += notas[k];

            printf("%s %.2lf\n", competidor, total * notas_partida);
        }
    }
    
    return 0;
}