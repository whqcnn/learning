#include <stdio.h>

int main()
{
    char *a[] = {"How", " are", " you"};
    char **p;
    p = a + 1;
    printf("%s\n", *p);
    printf("2 %s\n", **p);
}

