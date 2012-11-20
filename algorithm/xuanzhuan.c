#include <stdio.h>
//顺时针旋转矩阵90度。

#define HANG 9
#define LIE  9

void print_sz(int sz[][LIE])       //打印矩阵
{
    int x, y;
    for (x = 0; x < LIE; x++)
    {
        printf("[");
        for (y = 0; y < HANG; y++)
        {
            printf("%3d", sz[x][y]);
        }
        printf("]\n");
    }
    printf("\n");
}

void xuanzhuan(int sz[][LIE])        //旋转矩阵
{
    int i, j, n;
    int m = 0;

    for (i = 0; i < LIE/2; i++)
    {
        m++;
        for (j = i; j < HANG-m; j++)
        {
            n = sz[i][j];
            sz[i][j] = sz[HANG-1-j][i];
            sz[HANG-1-j][i] = sz[HANG-1-i][LIE-1-j];
            sz[HANG-1-i][LIE-1-j] = sz[j][LIE-1-i];
            sz[j][LIE-1-i] = n;
        }
        printf("\n");
    }
}

int main()                         //main 主函数
{
    int sz[HANG][LIE];
    int i, j;
    int n = 1;
    for (i = 0; i < LIE; i++)
    {
        for (j = 0; j < HANG; j++)
        {
            sz[i][j] = n;
            n++;
        }
    }
    print_sz(sz);
    xuanzhuan(sz);
    print_sz(sz);
}

