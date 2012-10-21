#include <stdio.h>

int main()
{
    int c;
    for (c = 0; c <= 129; ++c)
        printf("|%d %c|", c, c);
    printf("\n");
}

