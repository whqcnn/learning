#include <stdio.h>
#include <string.h>

int string_len(char str[])
{
    int i;
    i = strlen(str);
    return i;
}

int main()
{
    char n[] = "I like C";
    char m[200];
    int i;

    i = string_len(n);
    printf("%d\n", i);
    gets(m);
    i = string_len(m);
    printf("%d\n", i);
}
