#include <stdio.h>

int main()
{
    int c;
    int k = 0;
    int t = 0;
    int n = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++k;
        if (c == '\t')
            ++t;
        if (c == '\n')
            ++n;
    }
    printf("white:%d  \\t:%d  \\n%d\n", k, t, n);
}
