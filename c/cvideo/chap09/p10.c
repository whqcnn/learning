#include <stdio.h>
#define MAX(a, b) (a > b ? a : b)
#define MIN(a, b) (a < b ? a : b)
#define ABS(a) (a >= 0 ? a : - a )

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("MAX:%d MIN:%d ABS:%d\n", MAX(a, b), MIN(a, b), ABS(a));
}

