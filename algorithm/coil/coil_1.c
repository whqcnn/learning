#include <stdio.h>

#define H 12
#define L 13

int up_1(int nn[][L], int x, int y)
{
    return 0;
}

//向下
int down(int nn[][L], int x, int y)
{
    return 0;
}

// 向左
int left(int nn[][L], int x, int y)
{
    return 0;
}

//向右
int right(int nn[][L], int x, int y)
{
    return 0;
}

// 判断函数
int judge(int nn[][L], int x, int y, int s)
{
    int i, j, mm[H][L];

    for (i = 0; i < H; i++)
    {
        for(j = 0; j < L; j++)
        {
            mm[i][j] = 0;
        }
    }
    mm[x][y] = 1;
    int k = 1;

    if ((x-1) >= 0 && nn[x-1][y] != 'X')
    {
        k = up_1(nn, x, y);
        if ((k+1) == s)
            return (k+1);
    }

    if ((x+1) < H && nn[x+1][y] != 'X')
    {
        k = down(nn, x, y);
        if ((k+1) == s)
            return (k+1);
    }

    if ((y-1) >= 0 && nn[x][y-1] != 'X')
    {
        k = left(nn, x, y);
        if ((k+1) == s)
            return (k+1);
    }

    if ((y+1) < L && nn[x][y+1] == '.')
    {
        k = right(nn, x, y);
        if ((k+1) == s)
            return (k+1);
    }

    return 0;
}

//主函数main()
int main()
{
    int k = 0;
    int s = 0;
    int i, j;
    int nn[H][L];
    char a[H*L] = "................................XX..X...XX............X.XXX..X.X.X.....X....X....XX...XX........X......XXXXX.X..X.X....XX.XX.X..X......X.....X........X.....";

    for (i = 0; i < H; i++)
    {
        for (j = 0; j < L; j++)
        {
            nn[i][j] = a[k];
            k++;
            if (nn[i][j] == '.')
                ++s;
        }
    }

    for (i = 0; i < H; i++)
    {
        for (j = 0; j < L; j++)
        {
            if (nn[i][j] == '.')
                k = judge(nn, i, j, s);
            if (k == s)
                break;
        }
        if (k ==s)
            break;
    }

    if (k ==s)
        printf("\nGOOD\n");
    else
        printf("\n没找到解\n");
}
