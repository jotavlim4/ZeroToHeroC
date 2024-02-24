#include <stdio.h>

int main()
{
    double km_h, m_s;

    printf("type your speed (km/h): ");
    scanf("%lf", &km_h);
    

    m_s = km_h / 3.6l;
    printf("that is your speed: %.1lf m/s\n", m_s);
    
    return 0;
}