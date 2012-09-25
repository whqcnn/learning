#include <stdio.h>

int main()
{
    int i, n[100], big;

    for (i = 0; i < 10; i++)
        scanf("%d", &n[i]);
    big = n[0];
    for (i = 1; i < 10; i++)
        if (n[i] > big)
            big = n[i];
    printf("The biggest is %d\n", big);
}

