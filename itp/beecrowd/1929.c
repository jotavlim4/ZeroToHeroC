#include <stdio.h>

int validate_triangle(int a, int b, int c);

int main()
{
    int A, B, C, D;
    int form_triangle;

    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    form_triangle = validate_triangle(A, B, C) ||
                    validate_triangle(A, B, D) ||
                    validate_triangle(A, C, D) ||
                    validate_triangle(B, C, D);
                    
    if(form_triangle)
       printf("S\n");
    else
       printf("N\n");

    return 0;
}

int validate_triangle(int a, int b, int c)
{
    return (a < b + c) && (b < a + c) && (c < a + b); 
}