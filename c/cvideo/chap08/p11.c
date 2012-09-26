#include <stdio.h>
#include <string.h>

int main()
{
    char name[3][30];
    int i;
    for (i = 0; i < 3; i++)
        gets(name[i]);
    for (i = 0; i < 3; i++)
        printf("%s\n", name[i]);
    printf("%s\n", name);
}
