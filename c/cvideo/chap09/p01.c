#include <stdio.h>

void f2(int x, int y)
{
    x++;
    y++;
    printf("f2x = %d,f2y = %d\n", x, y);
    return (x, y);
}
void f1(int x, int y)
{
    int n = 0, m = 1;
    f2 (x, y);
    printf("n = %d, x = %d, y = %d\n", n, x, y);
}

int main()
{
    int n = 2, a = 3, b = 4;
    f1 (a, b);
    printf("n = %d, a = %d, b = %d\n", n, a, b);
}

