#include <stdio.h>

int main(){
    int n;
    int number, in, out;

    scanf("%d", &n);

    in = out = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &number);

        if(number >= 10 && number <= 20){
            in++;
        }
        else{
            out++;
        }
    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}