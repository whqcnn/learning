#include <stdio.h>

int ff()
{
    printf("**************\n");
}

int main()
{
    int i;

    for (i = 1; i < 5; i++)
        ff();
    printf("OK!\n");
}
