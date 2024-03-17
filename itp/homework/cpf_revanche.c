    #include <stdio.h>

int main()
{

	int d1, d2, d3, d4, d5, d6, d7, d8, d9;
	int first, second, sum, r;

	printf("Entre com os 9 primeiros digitos do seu cpf e então digite <ENTER>:\n");
	
    d1  = getchar() - 48;
    d2  = getchar() - 48;
    d3  = getchar() - 48;
    d4  = getchar() - 48;
    d5  = getchar() - 48;
    d6  = getchar() - 48;
    d7  = getchar() - 48;
    d8  = getchar() - 48;
    d9  = getchar() - 48;
    //d10 = getchar() - 48;
    //d11 = getchar() - 48;

	sum = (d1 * 10) + (d2 * 9) + (d3 * 8) + (d4 * 7) + (d5 * 6) + (d6 * 5) + (d7 * 4) + (d8 * 3) + (d9 * 2);
	r = sum % 11;

    if(r == 0 || r == 1){
        first = 0;
    }
    else{
        first = 11 - r;
    }
	

	sum = (d2 * 10) + (d3 * 9) + (d4 * 8) + (d5 * 7) + (d6 * 6) + (d7 * 5) + (d8 * 4) + (d9 * 3) + (first * 2);
	r = sum % 11;

    if(r == 0 || r == 1){
        second = 0;
    }
    else{
        second = 11 - r;
    }
	
	printf("dígito 1 = %d\n", first);
	printf("dígito 2 = %d\n", second);

	return 0;
}