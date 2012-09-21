#include <stdio.h>

int main()
{
    int a, b, c;
    printf("请输入年月日.格式：yy-mm-dd (如：2012-01-01）\n");
    scanf("%d-%d-%d", &a, &b, &c);
    printf("%d年%d月%d日\n", a, b, c);
}

