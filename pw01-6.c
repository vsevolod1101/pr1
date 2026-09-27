#include <stdio.h>
#define DAYS_PER_YEAR 365
#define HOURS_PER_DAY 24
#define SECONDS_PER_HOUR 3600
int main()
{
    int YEARS = 28;
    printf("Тики: %d|Часы: %d|Дни: %d|Годы: %d\n", YEARS*DAYS_PER_YEAR*HOURS_PER_DAY*SECONDS_PER_HOUR, YEARS*DAYS_PER_YEAR*HOURS_PER_DAY, YEARS*DAYS_PER_YEAR, YEARS);
    return 0;
}