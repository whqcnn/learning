#include <stdio.h>    //宏定义输出三个数的最大最小数和一个绝对值。
#define MAX(a,b,c) (a>b?(a>c?a:c):(b>c?b:c))
#define MIN(a,b,c) (a<b?(a<c?a:c):(b<c?b:c))
#define ABS(a)  (a>=0?(a):(-(a)))
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("MAX:%d MIN:%d ABS:%d\n", MAX(a,b,c), MIN(a,b,c), ABS(a));
}
