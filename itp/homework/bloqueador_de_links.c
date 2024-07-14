#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 101

void read(int c, char s[][TAM]){
    for(int i = 0; i < c; i++) {
        scanf(" %100s", s[i]);
    }
}

void strlower(char *s) {
    for(int i = 0; s[i] != '\0'; i++) {
        s[i] = tolower(s[i]);
    }
}

int issubstring(char *s1, char *s2) {
    strlower(s1);
    strlower(s2);

    return (strstr(s1, s2) != NULL);
}

void verify_address(int n1, char a[][TAM], int n2, char w[][TAM]) {
    for(int i = 0; i < n1; i++) {
        int blocked = 0;
        for(int j = 0; j < n2; j++) {
            if(issubstring(a[i], w[j])) {
                blocked = 1;
                break;
            }
        }
        if(blocked)
            puts("ENDEREÇO BLOQUEADO");
        else
            puts(a[i]);
    }
}

int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        char blocked_words[n][TAM];
        read(n, blocked_words);     

        int m;
        scanf("%d", &m);
        
        char adresses[m][TAM];
        read(m, adresses);

        verify_address(m, adresses, n, blocked_words);
    }

    return 0;
}
