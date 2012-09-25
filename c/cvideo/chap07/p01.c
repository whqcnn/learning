#include <stdio.h>

int main()
{
    int i;
    int a[5];

    for (i = 0; i < 5; i++)
        a[i] = i;
    for (i = 4; i >= 0; i--)
        printf("%d  ", a[i]);
    printf("\n");
}

