#include <stdio.h>

int main()
{
    int i;
    struct person
    {
        char name[20];
        char sex;
        int age;
        float height;
    }per[3] = {{"LiPing", 'M', 25, 175},
    {"Laopang", 'M',27, 168},
    {"Me", 'M', 26, 170}};
    for (i = 0; i < 3; i++)
        printf("%s %c %d %1.1f\n", per[i].name, per[i].sex,
        per[i].age, per[i].height);
}
