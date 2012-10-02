#include <stdio.h>

void swap(int *p1, int *p2)
{
    int p;
    p = *p1;
    *p1 = *p2;
    *p2 = p;
}

int main()
{
    int a = 3, b = 4;
    int *n1, *n2;
    n1 = &a;
    n2 = &b;
    if (a < b)
        swap(n1, n2);
    printf("%d, %d\n", a, b);
}
