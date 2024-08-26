#include <stdio.h>
#include <ctype.h>

#define MAX 100

char *strupr(char *s){
    int i = 0;
    while(s[i] != '\0'){
        s[i] = toupper(s[i]);
        i++;
    }
    return s;
}

int main(){
    char mystring[MAX] = "João Victor Lima da Silva";
    strupr(mystring);
    printf("%s\n", mystring);
    return  0;
}
