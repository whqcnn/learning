#include <stdio.h>
#include <string.h>

void string_change(char n[])
{
    char m[20];
    int i;
    int k;

    strcpy(m, n);
    for (i = 0; n[i] != '\0'; i++)
        ;
    k = i - 1;
    for (i = 0; m[i] != '\0'; i++)
        n[i] = m[k-i];
    n[i] = '\0';
}

int main()
{
    char m[20];
    gets(m);
    string_change(m);
    printf("%s\n", m);
}
