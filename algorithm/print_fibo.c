#include <stdio.h>

size_t count = 0;

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

size_t fibo2(size_t n)
{
    count ++;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return fibo2(n - 1) + fibo2(n - 2);
}

int main()
{
    int i;

    printf("%ld ", fibo2(40));

    printf("\n");
    printf("%d \n", count);
}
