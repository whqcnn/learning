#include <stdio.h>

int main()
{
    int n;
    printf("                 主菜单\n");
    printf("=========================================\n");
    printf("      1.输入功能\n");
    printf("      2.按学号查找\n");
    printf("      3.打印输出\n");
    printf("      0. 退出\n");
    printf("=========================================\n");
    printf("      请选择(0～3):\n");

        scanf("%d", &n);
        switch( n )
        {
            case 0: printf("谢谢使用\n"); break;
            case 1: printf("请输入：\n"); break;
            case 2: printf("请输入查找学生学号:\n"); break;
            case 3: printf("正在输入...\n"); break;
            default : printf("输入错误\n");
        }
}
