#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define STICKERS_LEN 100
#define PACKAGE_LEN 6

void welcome_message()
{
	printf("*************************************************\n");
	printf("\tWelcome to nerd-sticker-manager\n");
	printf("*************************************************\n");
	printf("Please, type:\n");
	printf("(1): To open package\n");
	printf("(2): To check the missing stickers\n");
	printf("(3): To see repeated stickers\n");
	printf("(4): To print all stickers you have\n");
	printf("(5): To exit\n");
	printf("*************************************************\n");
	printf("\n");
}


//faz a correspondecia: figurinha sorteada -> entra na posicao 'figurinha sortead' no vetor
//ou seja, vetor[figurinha_sorteda] = figurinha_sorteada;
void open_package(int v1[], int v2[], int v3[]) {
	int new_sticker;

	for(int i = 0; i < PACKAGE_LEN; i++) {
		new_sticker = (rand() % STICKERS_LEN) + 1;
		
		if(v1[new_sticker] == 0){
			v1[new_sticker] = new_sticker;
		}
		else{
			v2[new_sticker] = new_sticker;
			v3[new_sticker]++;
		}
	}
}	

int check_miss(int vec[]) {
	int count = 0;

	for(int i = 0; i < STICKERS_LEN; i++) {
		if(vec[i] == 0){
			count++;
			printf("%d (x)\n", i + 1);
		}
		else
			printf("%d ()\n", i + 1);
	}

	printf("obs: missing stickers (x). \n");

	return count;
}

int check_new(int vec[]) {
	int count = 0;

	for(int i = 0; i < STICKERS_LEN; i++) {
		if(vec[i] != 0)
			count++;
	}

	return count;
}

void print_stikers(int vec[]) {
	for(int i = 0; i < STICKERS_LEN; i++)
		if(vec[i] != 0)
			printf("%d\n", vec[i]);


	putchar('\n');	
}

void print_stikers_repetead(int vec[], int vec2[]) {
	for(int i = 0; i < STICKERS_LEN;i++)
		printf("%d(%d)\n", vec[i], vec2[i]);
}

void next_command_message() {
	printf("--------------------------------------\n");
	printf("What do you want do now? \n");
	printf("(1): To open package\n");
	printf("(2): To check the missing stickers\n");
	printf("(3): To see repeated stickers\n");
	printf("(4): To print all stickers you have\n");
	printf("(5): To exit\n");
	printf("--------------------------------------\n");
	printf("\n");	

}


void fill_vec(int vec[]) {
	int count = 0;

	for(int i = 0; i < STICKERS_LEN; i++) { 
		vec[i] = 0;
			
	}

}

int main() {
	int stickers[STICKERS_LEN];
	int repetead_stickers[STICKERS_LEN];
	int count_repetead[STICKERS_LEN];
	int finish = 1;

	srand(time(NULL));

	fill_vec(stickers);
	fill_vec(repetead_stickers);
	fill_vec(count_repetead);

	while(finish){
		int choise;
		int sticker, add;
		int stickers_miss;
		
		welcome_message();
		printf("Type here: ");

		scanf("%d", &choise);

		putchar('\n');

		while(finish){
			switch(choise) {
				//open
				case 1:
					open_package(stickers, repetead_stickers, count_repetead);
					add = check_new(stickers);
					printf("%d new stickers add to your album:\n", add);
					print_stikers(stickers);

					add = 0;

					next_command_message();
					printf("Type here: ");
					scanf("%d", &choise);
					printf("\n");
					
					break;
			
				//misisng stickers
				case 2:
					//print_stikers(stickers);
					
					stickers_miss = check_miss(stickers);
					printf("You need more %d stickers for complete your album!\n\n", stickers_miss);

					stickers_miss = 0;

					next_command_message();
					printf("Type here: ");
					scanf("%d", &choise);
					printf("\n");

					break;
				
				//repetead stickers
				case 3:
					printf("Here is your repeated stickers:\n");
					print_stikers_repetead(repetead_stickers, count_repetead);

					next_command_message();
					printf("Type here: ");
					scanf("%d", &choise);
					printf("\n");
				
					break;
				//print all stickers
				case 4:
					printf("In album stickers: \n");
					print_stikers(stickers);

					printf("Repeated stickers: \n");
					print_stikers(repetead_stickers);

					next_command_message();
					printf("Type here: ");
					scanf("%d", &choise);
					printf("\n");

					break;

				case 5:
					finish = 0;
					break;

			}
		}	
	}
	return 0;
}
