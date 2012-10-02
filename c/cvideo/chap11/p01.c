#include <stdio.h>  /*求两个数的最大数*/

int *max(int *x, int *y)
{
    int *q;
    if (*x > *y)
        q = x;
    else
        q = y;
    return q;
}

int main()
{
    int a, b, *p;
    scanf("%d%d", &a, &b);
    p = max(&a, &b);
    printf("%d, %d max is %d\n", a, b, *p);
}

