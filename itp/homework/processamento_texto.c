#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    /* 
        Se usar CMD ou PowerShell:

        SetConsoleCP(CP_UTF8);
        SetConsoleOutputCP(CP_UTF8); 
    */

    int count_line, count_letters, count_space;
    int count_a, count_e, count_i, count_o, count_u;
    int line, largest_line, total_letters;
    char c; 
    
    scanf("%d\n", &line);

    count_letters = count_line = 0;
    count_a = count_e = count_i = count_o = count_u = 0;
    largest_line = -1;
    total_letters = 0;
    
    for(int i = 0; i < line; i++){
        while ((c =  getchar())!= '\n'){
            if(c == ' '){
                count_space++;
            }
            else if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'){
                count_letters++;

                switch(c){
                    case 'a': count_a++; break;
                    case 'A': count_a++; break;
                
                    case 'e': count_e++; break;
                    case 'E': count_e++; break;
                
                    case 'i': count_i++; break;
                    case 'I': count_i++; break;
                
                    case 'o': count_o++; break;
                    case 'O': count_o++; break;

                    case 'u': count_u++; break;
                    case 'U': count_u++; break;
                }
            }
        }
    count_line = count_letters + count_space;
    total_letters += count_letters;

    if(count_line > largest_line){
        largest_line = count_line;
        }

    count_line = count_space = count_letters = 0;
    }
    printf("Quantidade de A: %d\n", count_a);
    printf("Quantidade de E: %d\n", count_e);
    printf("Quantidade de I: %d\n", count_i);
    printf("Quantidade de O: %d\n", count_o);
    printf("Quantidade de U: %d\n", count_u);
    printf("Total de letras: %d\n", total_letters);
    printf("Tamanho da maior linha: %d\n", largest_line);

    return 0;
}