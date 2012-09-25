#include <stdio.h>

int main()
{
    int n, m;

    printf("请输入成绩(0 ~ 100)：\n");
    scanf("%d", &n);
    switch (n / 10)
    {
        case 10:
        case 9: printf("成绩在90～100之间：成绩优秀\n"); break;
        case 8: printf("成绩在80～89之间：成绩良好\n"); break;
        case 7: printf("成绩在70～79之间：成绩中等\n"); break;
        case 6: printf("成绩在60～69之间：成绩及格\n"); break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0: printf("成绩在0～59之间：成绩不及格\n"); break;
        default : printf("输入分数错误\n");
    }
}

