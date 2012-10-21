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
            if (c >= 'A' && c <= 'Z' && m == 0)
            {
                ++n;
                ++m;
            }
            if (c >= 'a' & c <= 'z' && m == 0)
            {
                ++n;
                ++m;
            }
        }
        else
            m = 0;
    }
    printf("%d\n", n);
}

