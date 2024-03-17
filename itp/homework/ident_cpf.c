    #include <stdio.h>

int main()
{

	int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
	int first, second, sum, r;

	printf("Entre com os 11 digitos do seu cpf e então digite <ENTER>:\n");
    printf("(Não é necessário digitar os pontos e o hífen)\n");
	
    d1  = getchar() - 48;
    d2  = getchar() - 48;
    d3  = getchar() - 48;
    d4  = getchar() - 48;
    d5  = getchar() - 48;
    d6  = getchar() - 48;
    d7  = getchar() - 48;
    d8  = getchar() - 48;
    d9  = getchar() - 48;
    d10 = getchar() - 48;
    d11 = getchar() - 48;


    //verificação primeiro digito validador
	sum = (d1 * 10) + (d2 * 9) + (d3 * 8) + (d4 * 7) + (d5 * 6) + (d6 * 5) + (d7 * 4) + (d8 * 3) + (d9 * 2);
	r = sum % 11;

    if(r == 0 || r == 1){
        first = 0;
    }
    else{
        first = 11 - r;
    }
	

    //verificação segundo digito validador
	sum = (d2 * 10) + (d3 * 9) + (d4 * 8) + (d5 * 7) + (d6 * 6) + (d7 * 5) + (d8 * 4) + (d9 * 3) + (first * 2);
	r = sum % 11;

    if(r == 0 || r == 1){
        second = 0;
    }
    else{
        second = 11 - r;
    }

    //verifica se os digitos validadores estão ok
    if(first == d10  && second == d11){
        printf("O CPF %d%d%d.%d%d%d.%d%d%d-%d%d é válido.\n", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11);
        //verifica o valor do nono digite e printa o local onde o cpf foi registrado
        switch (d9){
        case 1:
            printf("O CPF foi gerado em um dos seguintes lugares: Distrito Federal, Goiás, Mato Grosso, Mato Grosso do Sul ou Tocantins.\n");
            break;
        case 2:
            printf("O CPF foi gerado em um dos seguintes lugares: Pará, Amazonas, Acre, Amapá, Rondônia ou Roraima.\n");
            break;
        case 3:
            printf("O CPF foi gerado em um dos seguintes lugares: Ceará, Maranhão ou Piauí.\n");
            break;
        case 4:
            printf("O CPF foi gerado em um dos seguintes lugares: Pernambuco, Rio Grande do Norte, Paraíba ou Alagoas.\n");
            break;
        case 5:
            printf("O CPF foi gerado em um dos seguintes lugares: Bahia ou Sergipe.\n");
            break;
        case 6:
            printf("O CPF foi gerado em: Minas Gerais.\n");
            break;  
        case 7:
            printf("O CPF foi gerado em um dos seguintes lugares: Rio de Janeiro ou Espírito Santo.\n");
            break;
        case 8:
            printf("O CPF foi gerado em: São Paulo.\n");
            break;
        case 9:
            printf("O CPF foi gerado em um dos seguintes lugares: Paraná e Santa Catarina.\n");
            break;
        case 0:
            printf("O CPF foi gerado em: Rio Grande do Sul.\n");
            break;        
        default:
            break;
        }
    }
    else{
        printf("O CPF informado é inválido.\n");
    }
	
	//printf("dígito 1 = %d\n", first);
	//printf("dígito 2 = %d\n", second);

	return 0;
}