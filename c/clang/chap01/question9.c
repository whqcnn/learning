#include <stdio.h>

int main()
{
    int c;
    int i = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t')
        {
            if (c == ' ' && i == 0)
            {
                putchar(c);
                ++i;
            }
            if (c == '\t' && i == 0)
            {
                printf(" ");
                ++i;
            }
        }
        else
        {
            putchar(c);
            i = 0;
        }
    }
}
