#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SORTED_PRIME 6
#define MAX_PRIME 1000000

int is_prime(int num){
	if(num <= 1)
		return 0;
	else{
		for(int i = 2; i * i <= num; i++){
			if(num % i == 0)
				return 0;
		}
	}
	return 1;
}



int main(){
	int p[SORTED_PRIME];
	int i;

	srand(time(NULL));

	i = 0;
	while(i < SORTED_PRIME){
		int random_number;

		random_number = (rand() % MAX_PRIME) + 1;

		if(is_prime(random_number)){
			p[i++] = (random_number % 26) + 1 ;
		}
	}

	for(int i = 0; i < SORTED_PRIME; i++){
		p[i] += 64;
	}

	for(int i = SORTED_PRIME - 1; i >= 0; i--){
		 i == 0 ? printf("%c\n", p[i]) : printf("%c ", p[i]);
	}


	return 0;
}
