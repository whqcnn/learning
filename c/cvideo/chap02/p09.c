#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1, k1, l1;
    int m2, k2, l2;
    char n1[20];
    char n2[20];
    char name1[100];
    char name2[100];
    printf("输入格式：姓名 学号 英语 数学 计算机成绩\n");
    scanf("%s %s %d %d %d", name1, n1, &m1, &k1, &l1);
    scanf("%s %s %d %d %d", name2, n2, &m2, &k2, &l2);
    printf("姓名：%s 学号：%s\n姓名：%s 学号：%s\n", name1, n1, name2, n2);
    printf("英语平均分：%d 数学平均分：%d 计算机平均分：%d\n\n", (m1 + m2) / 2, (k1 + k2) / 2, (l1 + l2) / 2);
}

