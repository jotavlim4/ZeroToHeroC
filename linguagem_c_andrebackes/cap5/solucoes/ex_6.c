#include <stdio.h>

int main()
{
    int i;

    for(i = 10; i >= 0; i--)
    {
        i == 0 ? printf("%d\nFIM!\n", i) : printf("%d\n", i);
    }
    return 0;
}