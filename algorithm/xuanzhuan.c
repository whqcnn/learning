// 顺时针旋转矩阵90度。
#include <stdio.h>

#define SIZE 9

void print_sz(int sz[][SIZE])       // 打印矩阵
{
    int x, y;
    for (x = 0; x < SIZE; x++)
    {
        printf("[");
        for (y = 0; y < SIZE; y++)
        {
            printf("%3d", sz[x][y]);
        }
        printf("]\n");
    }
    printf("\n");
}

void xuanzhuan(int sz[][SIZE])        // 旋转矩阵
{
    int i, j, n;
    int m = 0;

    for (i = 0; i < SIZE/2; i++)
    {
        m++;
        for (j = i; j < SIZE-m; j++)
        {
            n = sz[i][j];
            sz[i][j] = sz[SIZE-1-j][i];
            sz[SIZE-1-j][i] = sz[SIZE-1-i][SIZE-1-j];
            sz[SIZE-1-i][SIZE-1-j] = sz[j][SIZE-1-i];
            sz[j][SIZE-1-i] = n;
        }
        printf("\n");
    }
}

int main()                         //main 主函数
{
    int sz[SIZE][SIZE];
    int i, j;
    int n = 1;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            sz[i][j] = n;
            n++;
        }
    }
    print_sz(sz);
    xuanzhuan(sz);
    print_sz(sz);
}

