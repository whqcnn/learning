#include <stdio.h>
#define H  12
#define L  14

int left(int nn[][L], int mm[][L], int x, int y);
int right(int nn[][L], int mm[][L], int x, int y);

// 向下
int down(int nn[][L], int mm[][L], int x, int y)
{
    int i, j;
    int k = 0;
    int m = 0;
    int n = 0;
    int _mm[H][L];

    for (i = 0; i < H; i++)
    {
        for(j = 0; j < L; j++)
        {
            _mm[i][j] = mm[i][j];
        }
    }

    i = x;
    j = y;
    for (i = i+1; i < H && _mm[i][j] != 1 && nn[i][j] != 'X' ; i++)
    {
        k++;
        _mm[i][j] = 1;
    }
    i--;

    if ((j+1) < L && _mm[i][j+1] != 1 && nn[i][j+1] != 'X')
    {
        n = right(nn, _mm, i, j);
    }
    if ((j-1) >= 0 && _mm[i][j-1] != 1 && nn[i][j-1] != 'X')
    {
        m = left(nn, _mm, i, j);
    }

    if (n == 0 && m == 0)
        return k;
    else
    {
        printf("D");
        if (n > m)
            return (k+n);
        else
            return (k+m);
    }
}

// 向上
int up_1(int nn[][L], int mm[][L], int x, int y)
{
    int i, j;
    int k = 0;
    int m = 0;
    int n = 0;
    int _mm[H][L];

    for (i = 0; i < H; i++)
    {
        for(j = 0; j < L; j++)
        {
            _mm[i][j] = mm[i][j];
        }
    }

    i = x;
    j = y;
    for (i = i-1; i >= 0 && _mm[i][j] != 1 && nn[i][j] != 'X' ; i--)
    {
        k++;
        _mm[i][j] = 1;
    }
    i++;

    if ((j+1) < L && _mm[i][j+1] != 1 && nn[i][j+1] != 'X')
    {
        n = right(nn, _mm, i, j);
    }
    if ((j-1) >= 0 && _mm[i][j-1] != 1 && nn[i][j-1] != 'X')
    {
        m = left(nn, _mm, i, j);
    }

    if (n == 0 && m == 0)
        return k;
    else
    {
        printf("U");
        if (n > m)
            return (k+n);
        else
            return (k+m);
    }
}

// 向左
int left(int nn[][L], int mm[][L], int x, int y)
{
    int i, j;
    int k = 0;
    int m = 0;
    int n = 0;
    int _mm[H][L];

    for (i = 0; i < H; i++)
    {
        for(j = 0; j < L; j++)
        {
            _mm[i][j] = mm[i][j];
        }
    }

    i = x;
    j = y;
    for (j = j-1; j >= 0 && _mm[i][j] != 1 && nn[i][j] != 'X' ; j--)
    {
        k++;
        _mm[i][j] = 1;
    }
    j++;

    if ((i+1) < H && _mm[i+1][j] != 1 && nn[i+1][j] != 'X')
    {
        n = down(nn, _mm, i, j);
    }
    if ((i-1) >= 0 && _mm[i-1][j] != 1 && nn[i-1][j] != 'X')
    {
        m = up_1(nn, _mm, i, j);
    }

    if (n == 0 && m == 0)
        return k;
    else
    {
        printf("L");
        if (n > m)
            return (k+n);
        else
            return (k+m);
    }
}

// 向右
int right(int nn[][L], int mm[][L], int x, int y)
{
    int i, j;
    int k = 0;
    int m = 0;
    int n = 0;
    int _mm[H][L];

    for (i = 0; i < H; i++)
    {
        for(j = 0; j < L; j++)
        {
            _mm[i][j] = mm[i][j];
        }
    }

    i = x;
    j = y;
    for (j = j+1; j < L && _mm[i][j] != 1 && nn[i][j] != 'X' ; j++)
    {
        k++;
        _mm[i][j] = 1;
    }
    j--;

    if ((i+1) < H && _mm[i+1][j] != 1 && nn[i+1][j] != 'X')
    {
        n = down(nn, _mm, i, j);
    }
    if ((i-1) >= 0 && _mm[i-1][j] != 1 && nn[i-1][j] != 'X')
    {
        m = up_1(nn, _mm, i, j);
    }

    if (n == 0 && m == 0)
        return k;
    else
    {
        printf("R");
        if (n > m)
            return (k+n);
        else
            return (k+m);
    }
}

// 判断函数
int judge(int nn[][L], int x, int y, int s)
{
    printf("\n(%d%d)", x, y);
    int i, j;
    int k;
    int mm[H][L];

    for (i = 0; i < H; i++)
    {
        for (j = 0; j < L; j++)
        {
            mm[i][j] = 0;
        }
    }
    mm[x][y] = 1;
    i = x;
    j = y;

    if ((i+1) < H && mm[i+1][j] != 1 && nn[i+1][j] != 'X')
    {
        k = down(nn, mm, i, j);
        if ((k+1) == s)
        {
            printf("(%d%d)D", i, j);
            return (k+1);
        }
    }

    if ((i-1) >= 0 && mm[i-1][j] != 1 && nn[i-1][j] != 'X')
    {
        k = up_1(nn, mm, i, j);
        if ((k+1) == s)
        {
            printf("(%d%d)R", i, j);
            return (k+1);
        }
    }

    if ((j+1) < L && mm[i][j+1] != 1 && nn[i][j+1] != 'X')
    {
        k = right(nn, mm, i, j);
        if ((k+1) == s)
        {
            printf("(%d%d)R", i, j);
            return (k+1);
        }
    }

    if ((j-1) >= 0 && mm[i][j-1] != 1 && nn[i][j-1] != 'X')
    {
        k = left(nn, mm, i, j);
        if ((k+1) == s)
        {
            printf("(%d%d)L", i, j);
            return (k+1);
        }
    }

    return 1;
}

//主函数
int main()
{
    char a[H*L] = "XX..X....X....X..X..XX......X....X....X.....X....X....X.....X...............X.X..X.....XX.X....X.....XX....X.........X...XX...XXXX....X...........X...X.XX............XX";
    int k = 0;
    int m = 0;
    int n = 0;
    int i, j;
    int nn[H][L];
    for (i = 0; i < H; i++)
    {
        for (j = 0; j < L; j++)
        {
            nn[i][j] = a[k];
            k++;
        }
    }
    k = 0;
    for (i = 0; i < H; i++)
    {
        for (j = 0; j < L; j++)
        {
            if (nn[i][j] == '.')
            {
                k++;
            }
            printf("%c ", nn[i][j]);
        }
        printf("\n");
    }
    printf("%d\n", k);

    for (i = 0; i < H; i++)
    {
        for (j = 0; j < L; j++)
        {
            if (nn[i][j] == '.')
            {
                m = judge(nn, i, j, k);
            }
            if (m == k)
                break;
        }
        if (m == k)
            break;
    }

    if (m == k)
        printf("\n");
    else
        printf("\n没有解\n");
}
