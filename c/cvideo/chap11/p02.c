#include <stdio.h>  /*求两个数的最大数*/

int max(int x, int y)
{
    int q;
    if (x > y)
        q = x;
    else
        q = y;
    return q;
}

int main()
{
    int a, b, c;
    int (*p)();

    p = max;
    scanf("%d%d", &a, &b);
    c = (*p)(a, b);
    printf("%d %d max is: %d\n", a, b, c);
}

