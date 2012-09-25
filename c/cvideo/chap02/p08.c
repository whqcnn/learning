#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != '\n')
        putchar(c);
}
