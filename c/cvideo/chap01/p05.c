#include <stdio.h>

int is_prime(int a)
{
    int b;

    if (a <= 1)
        return 0;
    for (b = 2; b < a; b++)
    {
        if (a % b == 0)
            return 0;
    }
        return 1;
}

int main()
{
    int a;

    while ( 1 )
    {
        scanf("%d", &a);
        printf("%d\n", is_prime(a));
    }
}


