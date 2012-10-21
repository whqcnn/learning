#include <stdio.h>

#define MAXLINE 1000

int getlin(char s[], int max)
{
    int c, i;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = '\n';
        ++i;
    }
    s[i] = '\0';
    return i;
}

int ifput(char s[])
{
    int i = 0;
    while (s[i] != '\n')
        ++i;
    --i;
    while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
        --i;
    if (i >= 0)
    {
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }
    return i;
}

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getlin(line, MAXLINE)) > 0)
    {
        if ((ifput(line)) > 0)
            printf("%s", line);
    }
    return 0;
}
