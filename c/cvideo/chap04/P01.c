#include <stdio.h>

int main()
{
    int n, m;

    for (n = 1; n <=9; n++)
    {
        for (m = 1; m <= n; m++)
            printf("%d\t", m);
        printf("\n");
    }
}

