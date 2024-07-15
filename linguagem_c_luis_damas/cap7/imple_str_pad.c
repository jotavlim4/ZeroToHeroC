#include <stdio.h>
#include <string.h>

char *str_pad(char *s)
{
    int i = strlen(s);

    s[2 * i] = s[i];

    for(i--; i >= 0; i--)
    {
        s[2 * i] = s[i];
        s[2 * i + 1] = ' ';
    }

    return s;
}

int main()
{
    char string[100] = "Joao";

    printf("string original: %s\n", string);
    printf("string modificada: %s\n", str_pad(string));

    return 0;
}

/*
Funcionamento:

Considerações iniciais:

Note que para não perder nenhum caracter, será necessário começar do final para o inicio.
Primeiramente vamos colocar o '\0' que está na posição 'strlen(s)' na nova posição.

8.    s[2 * i] = s[i];

Como teremos um espaço em braco após cada caracter da string, significa que a string resultante,
terá o dobro do tamanho da string original. E cada elemento ocupara a posicão 2*i na string resultante.

Observe também que o espaço em branco vem imediatamente após a o elemento, portanto ele ocupara a posição
2*i + 1.

Dito isso, segue o funcionamento:

Após colocarmos o caracter delimitador na posição que ele deverá ocupar, entramos no laço
for para fazer o mesmo com os demais caracteres. Mas primeiro precisamos ajustar a posição do i.
Por esse motivo a carga inicial do for é for(i--; ...). Feito isso, entramos no corpo do for e executamos:

12.        s[2 * i] = s[i];
13.        s[2 * i + 1] = ' ';

Na linha 12 fazemos o elemento que está na posição i, ir para a posicão 2*i. Em seguida
colocamos um espaço em branco imediatemente após a nova posição do elemento i.  
*/