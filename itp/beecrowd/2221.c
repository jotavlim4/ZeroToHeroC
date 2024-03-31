#include <stdio.h>

int main()
{   
    int T;

    scanf("%d", &T);

    while(T--) // quando T chegar a zero while vai enteder com false e vai interromper a execuçcao do loop
    {
        int B;

        scanf("%d", &B);

        int Ad, Dd, Ld, Ag, Dg, Lg;

        scanf("%d %d %d", &Ad, &Dd, &Ld);
        scanf("%d %d %d", &Ag, &Dg, &Lg);

        double stroke_value_d, stroke_value_g;

        stroke_value_d = (Ad + Dd) / 2.0 + (Ld % 2 == 0 ? B : 0); //só soma o bonus  o level é se par
        stroke_value_g = (Ag + Dg) / 2.0 + (Lg % 2 == 0 ? B : 0); //só soma o bonus  o level é se par

        if(stroke_value_d > stroke_value_g)
            printf("Dabriel\n");
        else if(stroke_value_d < stroke_value_g)
            printf("Guarte\n");
        else
            printf("Empate\n");
    }
    return 0;
}