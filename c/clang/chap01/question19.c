#include <stdio.h>

int getlin(char s[])
{
    int c, i;

    for (i = 0; ((c = getchar()) != EOF && c != '\n'); ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = '\n';
        ++i;
    }
    s[i] = '\0';
    return i;
}

int copy(char s[])
{
    int i, k;
    char c;
    i = 0;
    while (s[i] != '\n')
        ++i;
    if (i >= 1)
        k = i - 1;
    else
        k = 0;
    for (i = 0; i <= k/2; ++i)
    {
        c = s[i];
        s[i] = s[k-i];
        s[k-i] = c;
    }
    return i;
}

int main()
{
    int len;
    char line[1000];

    while ((len = getlin(line)) > 0)
    {
        copy(line);
            printf("%s", line);
    }
    putchar('\n');
}
