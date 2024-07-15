#include <stdio.h>

#define TAM 101

int strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i] == s2[i] && s1[i] != '\0')
        i++;
    
    return (s1[i] - s2[i]);
}

int main()
{
    char nome[TAM];

    do
    {
        printf("Digite um nome: "); gets(nome);
        puts(nome);
    } while (strcmp(nome, "Sair") != 0 && strcmp(nome, "SAIR") != 0 && strcmp(nome, "sair") != 0);
    puts("Terminou o programa!");    
    
    return 0;
}