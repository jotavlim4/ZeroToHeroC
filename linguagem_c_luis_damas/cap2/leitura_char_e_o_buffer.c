#include <stdio.h>

int main() {
	char ch1, ch2;
	printf("Digite um caracter: "); scanf("%c", &ch1);
	printf("Digite outro caracter: "); scanf("%c", &ch2);
	// aqui teremos um erro de leitura, pois ao digitarmos o primeiro caracter
	// e pressionarmos <enter> o buffer irá armazenar dois dados:
	// o caracter digitado e o enter(new line)
	// desse modo, o caracter digitado será armazenado da forma que gostariamos,
	// porém a segunda variável armazenará o new line e portanto ao exibirmos a
	// informacao na tela ela estará de forma diferente do esperado.
	printf("Os caracteres digitados foram '%c' e '%c'\n", ch1, ch2);

	// uma forma de corrigir isso:
	printf("Digite um caracter: "); scanf("%c", &ch1);
	printf("Digite outro caracter: "); scanf(" %c", &ch2);
	// note que no segundo scanf, antes do formatador existe um espaço em branco
	// isso da a instrução de ignorar todos os <ENTER>, <SPACE> e <TAB> que foram
	// encontrados no buffer.

	printf("Os caracteres digitados foram '%c' e '%c'\n", ch1, ch2);

	return 0;
}