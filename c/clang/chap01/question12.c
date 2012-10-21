#include <stdio.h>

int main()
{
    int c;
    int n = 0;
    int m = 0;

    while ((c = getchar()) != EOF)
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            putchar(c);
            ++m;
        }
        else
        {
            if (m != 0)
                printf("\n");
            m = 0;
        }
    }
}
