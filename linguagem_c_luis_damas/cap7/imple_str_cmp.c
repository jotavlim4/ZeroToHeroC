#include <stdio.h>

int str_cmp(char *s1, char *s2)
{
    int i;
    i = 0;
    
    while(s1[i] == s2[i] && s1[i] != '\0')
        i++;
    
    return (s1[i] - s2[i]);
}


int main() 
{
    char string1[] = "Maria";
    char string2[] = "Maria";

    printf("%d\n", str_cmp(string1, string2));

    return 0;
}

/*
Estratégia:

Percorremos as strings equantos os caracteres forem iguais e não encontramos o delimitador.
Então o loop será interrompido quando: 

1) Chegarmos ao fim de ambas as strings. O resultado devolvido será zero (elas são iguais).
2) Foi encontrado algum caracter diferente. Nesse caso o valor será positio se s1 for alfabeticamente maior que s2.
   e será negativo se s1 for alfabeticamente menor de s2.

obs.: uma letra é alfabeticamente maior que outra se ela vier depois na tabela ascii. Por outro lado, será alfabeticamente
menor quanod vier antes.

a
b
c
d
e
f
.
.
.
z

'a' é alfabeticamente menor que 'e', pois 'a' vem antes de 'e'.
uma outra forma de dizer isso é 'a' < 'e'

*/