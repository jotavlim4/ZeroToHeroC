#include <stdio.h>
#include <math.h>

double fib(unsigned num);

int main()
{
    unsigned n;
    double fibonacci_n;
    
    scanf("%u", &n);

    fibonacci_n = fib(n);

    printf("%.1lf\n", floor(fibonacci_n));
    return 0;
}

double fib(unsigned num)
{
    double binet;

    binet = ((pow((1 + sqrt(5))/2, num))-pow((1 - sqrt(5))/2, num)) / sqrt(5);

    return binet;
}
