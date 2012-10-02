#include <stdio.h>

int sum (int *q, int n)
{
    int i, s = 0;
    for (i = 0; i < n; i++, q++)
        s += *q;
    return s;
}

int main()
{
    int m, n;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p;
    printf("Please input m and n (m < n < 10):\n");
    scanf("%d%d", &m, &n);
    p = a + m - 1;
    printf("%d\n", sum(p, n - m + 1));
}

