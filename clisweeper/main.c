#include <stdio.h>
#include "mines.h"

int main()
{
    struct stone mines[10][10];
    init_mines(mines);
    place_mines(mines);
    number(mines);
    int x, y;
    printf("请输入坐标(如：2，3):\n");
    scanf("%d,%d", &x, &y);
    while (mines[x][y].value != -1 && g != T)
    {
        if (mines[x][y].value == 0)
            pp (mines, x, y);
        else
            mines[x][y].is_open = 1;
        if (0 <= x && x < 10 && 0 <= y && y < 10)
        {
            print_mines(mines);
            printf("还有%d个不是炸弹\n", (g-T));
            if (g != 10)
            {
                printf("请输入坐标(如：2，3):\n");
                scanf("%d,%d", &x, &y);
            }
        }
        else
        {
            printf("输入错误从重新输入:(如: 2,3)\n");
            scanf("%d,%d", &x, &y);
        }
    }
    if (mines[x][y].value == -1)
    {
        for (x = 0; x < 10; x++)
           for (y = 0; y < 10; y++)
                mines[x][y].is_open = 1;
        printf("\n嘣 BOM 嘣\n你被炸了!!!\n");
        print_mines(mines);
        printf("\nGAME OVER\n");
    }
    printf("\n\n\n***** SUCCESS *****\n\n\n\n    恭喜您成功！\n\n\n\n");
}
