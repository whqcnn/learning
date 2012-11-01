#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i;
    srand48(time(0));
    for (i = 0; i < 10; ++i)
    {
        printf("%d\n", (int)(drand48() * 5.5));
    }
    char c;
    c = 65;
    printf("*%c*", c);
}

