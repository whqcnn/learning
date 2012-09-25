#include <stdio.h>

int main()
{
    int x;
    int y = 1;

    for ( x = 1; x < 10; x++)
        y = y * x;

    printf("9! = %d\n", y);
}
