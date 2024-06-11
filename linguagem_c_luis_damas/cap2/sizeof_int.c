#include <stdio.h>

int main() {
	printf("type              \tbytes\tbits\n");
    printf("-------------------------------------\n");
    printf("int               \t%5d\t%4d\n", sizeof(int), sizeof(int) * 8);
    printf("short int         \t%5d\t%4d\n", sizeof(short int), sizeof(short int) * 8);
    printf("long int          \t%5d\t%4d\n", sizeof(long int),sizeof(long int) * 8);
    printf("unsigned int      \t%5d\t%4d\n", sizeof(unsigned int), sizeof(unsigned int) * 8);
    printf("unsigned short int\t%5d\t%4d\n", sizeof(unsigned short int), sizeof(unsigned short int) * 8);
    printf("unsigned lont int \t%5d\t%4d\n", sizeof(unsigned long int), sizeof(unsigned long int) * 8);
}