#include <stdio.h> /*  对结构体变量成员的引用  */

int main()
{
    struct person
    {
        char name[20];
        char sex;
        struct date
        {
            int year;
            int month;
            int day;
        }birthday;
        float height;
    }per;

    printf("Enter the name:\n");
    gets(per.name);
    per.sex = 'M';
    per.birthday.year = 1988;
    per.birthday.year++;
    per.birthday.month = 12;
    per.birthday.day = 15;
    per.height = (132 +213) / 2;
    printf("%s %c %4d/%2d/%2d %1.1f\n", per.name, per.sex, 
    per.birthday.month, per.birthday.day, per.birthday.year,
    per.height);
}
