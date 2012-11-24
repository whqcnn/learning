// 1 ～ 13 中有哪两个数之和为21? 输出它们.

#include <stdio.h>

#define SUM 21
#define BIG 13
#define SMA 1

int main()
{
    int a;
    for (a = BIG; a > (SUM -a); a--)
        printf("这两个数为: %d %d\n", a, (SUM -a));
}
