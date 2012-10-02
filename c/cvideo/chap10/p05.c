#include <stdio.h>

int sum(int *q, int n)
{
    int i, s = 0;
    for (i = 0; i < n; i++, q++)
        s += *q;
        return s;
}

int main() 
{
    int num, a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = a;
    scanf("%d", &num);
    printf("%d\n", sum(p, num));
}
