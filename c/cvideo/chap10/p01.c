#include <stdio.h>

int main()
{
    int a, b;
    int *p;
    p = &b;
    a = 3;
    *p = 5;
    printf("a = %d, b = %d, p = %d\n", a, b, &*p);
}
