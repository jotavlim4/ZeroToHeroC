#include <stdio.h>

int main()
{
    int months[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day, mon;

    while(scanf("%d %d", &mon, &day) != EOF)
    {
        long long total_sec, christmas;

        christmas =  total_sec = 0;

        for(int i = 0; i < 11; i++)
        {
            christmas = christmas + (months[i] * 86400ll);
        }

        christmas += 25 * 86400ll;

        for(int i = 0; i < mon - 1; i++)
        {
            total_sec = total_sec + (months[i] * 86400ll);
        }

        total_sec += day * 86400ll;

        long long diff;

        diff = christmas - total_sec;

        if(diff == 0)
        {
            printf("E natal!\n");
        }
        else if(diff == 86400ll)
        {
            printf("E vespera de natal!\n");
        }
        else if(diff < 0)
        {
            printf("Ja passou!\n");
        }
        else if(diff > 0)
        {
            printf("Faltam %d dias para o natal!\n", diff/86400ll);
        }
    }
    return 0;
}