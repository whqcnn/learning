#include <stdio.h>
#include "p05.h"

int string_len(char n[])
{
    int i;
    for (i = 0; n[i] != '\0'; i++)
        ;
        return i;
}

int main()
{
    char n[N];
    in("%s", n);
    out("%s 有%d个字符。\n", n, (string_len(n)));
}
