#include <stdio.h>

int pertence(int num, int lim_inf, int lim_sup) {
    return (lim_inf <= num && num <= lim_sup);
}

int main() {
    int l_inf, number, l_sup;

    printf("Digite tres números inteiros: ");
    scanf("%d %d %d", &l_inf, &number, &l_sup);

    if(pertence(number, l_inf, l_sup))
        printf("Está contido!\n");
    else
        printf("Não está contido!\n");

    return 0;
}