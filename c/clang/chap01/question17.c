#include <stdio.h>

#define MAXLINE 1000

int getlin(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim && (c = getchar()) != EOF && c != '\n';++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = '\n';
        ++i;
    }
    s[i] = '\0';
    return i;
}

int main()
{
    int len;
    int max = 0;
    char line[MAXLINE];

    while ((len = getlin(line, MAXLINE)) > 0)
        if (len > 20)
        {
            printf("%s", line);
            if (len > max)
                max = len;
        }
    if (max < 20)
        printf("没有超过20个字符的行\n");
    return 0;
}

