#include <stdio.h>

size_t fibo(size_t n)
{
    int k = 0;
    int k1 = 1;
    int k2 = 2;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    for (int i = n ; i >= 3; i--)
    {
        k = k1 + k2;
        k1 = k2;
        k2 = k;
    }

    return k;
}

int main()
{
    int i;

    for (i = 1; i <= 10; ++i)
        printf("%ld ", fibo(i));

    printf("\n");
}
