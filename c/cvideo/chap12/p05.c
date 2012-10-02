#include <stdio.h>

int main()
{
    enum season
    {spring, summer, autumn, winter}s;
    for (s = 0; s < 4; s++)
        printf("%d\n", s);
}

