#include <stdio.h>

int main()
{
    struct person
    {
        char name[10];
        char sex[3];
        int age;
        float height;
    };
    struct person b, p;
    scanf("%s", b.name);
    scanf("%s", p.sex);
    scanf("%d", &p.age);
    scanf("%f", &p.height);
    printf("%s %s %d %1.1f\n", b.name, p.sex, p.age, p.height);
}
