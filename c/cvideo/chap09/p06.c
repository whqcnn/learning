#include <stdio.h>    //表态变量

int ff(int n)
{
    static int i, k;
    for (i = 0; i <= n; i++)
        k += i;
    return k;
}

int main()
{
    static int n;
    int m;
    scanf("%d", &n);
    m = ff(n);
    printf("%d\n", m);
}

