#include <stdio.h>

int main()
{
    int x = 1;
    int y = 1;
    int n;

    scanf("%d", &n);

    for (x = 1; x <= n; x++)
        y = y *x;
    printf("%d! = %d\n", n, y);
}
