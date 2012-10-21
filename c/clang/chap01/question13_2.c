#include <stdio.h>

int main()
{
    int c;
    int n = 0;
    int m = 0;
    int i;
    int h[20][12];

    while ((c = getchar()) != '\n')
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            h[n][m] = 1;
            ++m;
        }
        else
        {
            if (m != 0)
                ++n;
            m = 0;
        }
    }
    i = n;
    for (m = 11; m >= 0; --m)
    {
        for (n = 0; n <= i; ++n)
        {
            if (h[n][m] == 1)
                printf("口");
            else
                printf("  ");
        }
        printf("\n");
    }
}
