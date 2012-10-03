#include <stdio.h>

int main()
{
    struct person
    {
        char name[10];
        char sex[3];
        int age;
        float height;
    }per[3] = {{"高新国","女", 26, 175},
    {"杨博", "男", 27, 168},
    {"马龙", "男", 25, 174}};
    struct person *p;
    for (p = per; p < per + 3; p++)
        printf("%s %s %d %1.1f\n", p->name, p->sex, p->age,
        p->height);
}
