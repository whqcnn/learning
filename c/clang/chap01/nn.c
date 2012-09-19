#include <stdio.h>

int is_prime(int k)
{
    int n = 2;
    for (n = 2; n * n <= k; ++n)
    {
        if (k % n == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n = 3;
    int m = 1;

    for (n = 3; n < 10000000; n = n + 2) {
        if (is_prime(n))
            m++;
    }
    printf ("%d\n", m);
}

