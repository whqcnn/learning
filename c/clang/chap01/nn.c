#include <stdio.h>

int numb(int k)
{
    int n = 2;
    for (n = 2; n < k - 1; ++n)
    {
        if (k % n == 0)
            return -1;
    }
    return k;
}

int main()
{
    int n = 3;
    int m = 1;

    for (n = 3; n < 1000000; n++) {
        if (numb(n) == n)
            m++;
    }
    printf ("%d\n", m);
}

