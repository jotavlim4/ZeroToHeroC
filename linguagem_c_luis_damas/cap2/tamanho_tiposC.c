#include <stdio.h>

int main() {
    printf("  type\tbytes\tbits\n");
    printf("  -------------------\n");
    printf("  char\t%5d\t%4d\n", sizeof(char), sizeof(char) * 8);
    printf("   int\t%5d\t%4d\n", sizeof(int), sizeof(int) * 8);
    printf(" float\t%5d\t%4d\n", sizeof(float),sizeof(float) * 8);
    printf("double\t%5d\t%4d\n", sizeof(double ), sizeof(double) * 8);

    return 0;
}