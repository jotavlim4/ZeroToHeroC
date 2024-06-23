#include <stdio.h>

int main() {
    char op;
    int a, b, result = 0;

    printf("Digite a expressão: ");
    scanf("%d %c %d", &a ,&op, &b);

    switch(op) {
        case '+': 
            result = a + b; break;
        case '-': 
            result = a - b; break;
        case '/':
        case '\\':
        case ':':
            result = a / b; break;
        case '*':
        case 'x': 
        case 'X':
            result = a * b; break;
        default: 
            op = 0; 
    }

    if(op)
        printf("%d %c %d = %d\n", a, op, b, result);
    else
        printf("Operação inválida!\n");

    return 0;
}