#include <stdio.h>

int main()
{
    int x, y, k;
    printf("从大到小排列x y.输入：x  y的值\n");

    scanf("%d%d", &x, &y);
    if (x < y)
    {
        k = x;
        x = y;
        y = k;
    }
    else ;
    printf("%d  %d\n", x, y);
}

