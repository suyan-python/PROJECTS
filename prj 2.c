// TO CONVERT BS INTO AD 

#include <stdio.h>

int main()
{
    int year, month, day;

    printf("****IN BS****\n");
    printf("YEAR/MONTH/DAY\n");
    scanf("%d/%d/%d", &year, &month, &day);

    if (day > 15)
    {
        day -= 15;
    }
    else
    {
        day += 30;
        --month;
        day -= 15;
    }

    if (month > 8)
    {
        month -= 8;
    }
    else
    {
        month += 12;
        --year;
        month -= 8;
    }
    year -= 56;

    printf("YEAR IN AD IS %d/%d/%d\n", year, month, day);
    return 0;
}
