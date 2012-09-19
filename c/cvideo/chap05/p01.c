#include <stdio.h>

#define YEAR1  1988
#define YEAR2  2012
#define MONTH1 12
#define MONTH2 9
#define DATE1  31
#define DATE2  15

int main()
{
    int days = 0;
    int year = 0;

    for (year = YEAR1; year < YEAR2; year++)
        if ((year % 4 == 0 && year % 100 != 0) ||
           (year % 400 == 0))
            days += 366;
        else
            days += 365;

    // days in 1987, for 1987-12-31
    days += 1;

    // days in 2012, to 2012-09-15
    days += 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
    days += 15; // for september

    printf("%d\n", days);
}
