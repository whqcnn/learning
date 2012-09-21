#include <stdio.h>

int max(int a, int b, int c, int d, int e, int f)
{
    int m = 0;

    if (a >= m)
        m = a;
    if(b >= m)
        m = b;
    if (c >= m)
        m = c;
    if (d >= m)
        m = d;
    if (e >= m)
        m = e;
    if (f >= m)
        m = f;

    return m;
}

int main()
{
    int a, b, c, d, e, f, n;

    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
    n = max(a, b, c, d, e, f);
    printf("%d\n", n);
}


