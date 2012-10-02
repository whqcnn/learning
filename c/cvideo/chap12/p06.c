#include <stdio.h>

int main()
{
    struct date
    {
        int year;
        int month;
        int day;
    }n;
    scanf("%d", &n.year);
    n.month = 12;
    n.day = 30;
    printf("%d %d %d\n", n.year, n.month, n.day);
}
