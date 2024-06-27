#include <stdio.h>

void linha(int num, char ch) {
    for(int i = 0; i < num; i++)
        putchar(ch);
    putchar('\n');
}

int main() {

    linha(10, '&'); //procedimento, não tem valor de retorno.
                    //é invocado sem precisar de atribuicao,
                    //simplesmente digitande o nome e passando
                    //os argumentos.
    return 0;

}