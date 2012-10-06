#include <stdio.h> //是否闰年与大写
#define YEAR(year) (year%4==0 && year%100 != 0 || year%400 == 0)?1:0
#define Isupper(a) (a>=65&&a<=90)?'Y':'N'

int main()
{
    int x, y;

    printf("请输入年份：\n");
    scanf("%d", &x);
    printf("请输入一个字符:\n");
    scanf("%d", &y);
    printf("%d  %d\n%d  %c\n", x, YEAR(x), y, Isupper(y));
}
