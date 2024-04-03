#include <stdio.h>

double menor_nota(double nota1, double nota2, double nota3)
{
    double menor = 50;

    if(menor > nota1)
        menor = nota1;

    if(menor > nota2)
        menor = nota2;

    if(menor > nota3)
        menor = nota3;

    return menor;
}

double calc_nota(double nota1, double nota2, double nota3)
{
    
    if(nota1, nota2, nota3 >= 3 && (nota1 + nota2 + nota3) / 3 < 5)
    {
        double nota_retirada;
        double nota_minima;

        nota_retirada = menor_nota(nota1, nota2, nota3);
        nota_minima = 15 - nota1 - nota2 - nota3 + nota_retirada;

        return nota_minima;      
        
    }
    else
    {
        return -1;
    }
}

int main()
{
    double n1, n2, n3;
    double min;
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    min = calc_nota(n1, n2, n3);

    if(min != -1)
    {
        printf("Final\n");
        printf("%.1lf", min);
    }
    else
    {
        printf("Nao faz prova final");
    }

    return 0;
}   