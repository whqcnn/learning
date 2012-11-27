#include <stdio.h>
#include "reverse.h"
#include "game_data.h"

char path[9999];

int sum = 0;

int left(int mm[][X], int x, int y, int k);
int right(int mm[][X], int x, int y, int k);

int is_ok(int x, int y, int X, const char *board)
{
    return x >= 0 && board[x * X + y] != 'X';
}

int up_1(int mm[][X], int x, int y, int k, const char *board)
{
    int i, j;
    int n = 0;
    int _mm[Y][X];
    for (i = 0; i < Y; i++)
    {
        for (j = 0; j < X; j++)
        {
            _mm[i][j] = mm[i][j];
        }
    }

    for (x = (x-1); is_ok(x, y, board) && _mm[x][y] != 1; --x)
    {
        _mm[x][y] = 1;
        ++k;
    }
    x++;

    if (k == sum)
    {
        strcat(path, "U");
        return 1;
    }

    if ((y-1) >= 0 && board[x][y-1] != 'X' && _mm[x][y-1] != 1)
    {
        n = (left(_mm, x, y, k));
        if (n == 1)
        {
            strcat(path, "U");
            return 1;
        }
    }
    if ((y+1) < X && board[x][y+1] != 'X' && _mm[x][y+1] != 1)
    {
        n = (right(_mm, x, y, k));
        if (n == 1)
        {
            strcat(path, "U");
            return 1;
        }
    }

    return 0;
}

//向下
int down(int mm[][X], int x, int y, int k)
{
    int i, j;
    int n = 0;
    int _mm[Y][X];
    for (i = 0; i < Y; i++)
    {
        for (j = 0; j < X; j++)
        {
            _mm[i][j] = mm[i][j];
        }
    }

    for (x = (x+1); x < Y && board[x][y] != 'X' && _mm[x][y] != 1; ++x)
    {
        _mm[x][y] = 1;
        ++k;
    }
    x--;

    if (k == sum)
    {
        strcat(path, "D");
        return 1;
    }

    if ((y-1) >= 0 && board[x][y-1] != 'X' && _mm[x][y-1] != 1)
    {
        n = (left(_mm, x, y, k));
        if (n == 1)
        {
            strcat(path, "D");
            return 1;
        }
    }
    if ((y+1) < X && board[x][y+1] != 'X' && _mm[x][y+1] != 1)
    {
        n = (right(_mm, x, y, k));
        if (n == 1)
        {
            strcat(path, "D");
            return 1;
        }
    }

    return 0;
}

// 向左
int left(int mm[][X], int x, int y, int k)
{
    int i, j;
    int n = 0;
    int _mm[Y][X];
    for (i = 0; i < Y; i++)
    {
        for (j = 0; j < X; j++)
        {
            _mm[i][j] = mm[i][j];
        }
    }

    for (y = (y-1); y >= 0 && board[x][y] != 'X' && _mm[x][y] != 1; --y)
    {
        _mm[x][y] = 1;
        ++k;
    }
    y++;

    if (k == sum)
    {
        strcat(path, "L");
        return 1;
    }

    if ((x-1) >= 0 && board[x-1][y] != 'X' && _mm[x-1][y] != 1)
    {
        n = (up_1(_mm, x, y, k));
        if (n == 1)
        {
            strcat(path, "L");
            return 1;
        }
    }
    if ((x+1) < Y && board[x+1][y] != 'X' && _mm[x+1][y] != 1)
    {
        n = (down(_mm, x, y, k));
        if (n == 1)
        {
            strcat(path, "L");
            return 1;
        }
    }

    return 0;
}

//向右
int right(int mm[][X], int x, int y, int k)
{
    int i, j;
    int n = 0;
    int _mm[Y][X];
    for (i = 0; i < Y; i++)
    {
        for (j = 0; j < X; j++)
        {
            _mm[i][j] = mm[i][j];
        }
    }

    for (y = (y+1); y < X && board[x][y] != 'X' && _mm[x][y] != 1; ++y)
    {
        _mm[x][y] = 1;
        ++k;
    }
    y--;

    if (k == sum)
    {
        strcat(path, "R");
        return 1;
    }

    if ((x-1) >= 0 && board[x-1][y] != 'X' && _mm[x-1][y] != 1)
    {
        n = (up_1(_mm, x, y, k));
        if (n == 1)
        {
            strcat(path, "R");
            return 1;
        }
    }
    if ((x+1) < Y && board[x+1][y] != 'X' && _mm[x+1][y] != 1)
    {
        n = (down(_mm, x, y, k));
        if (n == 1)
        {
            strcat(path, "R");
            return 1;
        }
    }

    return 0;
}

// 判断函数
int judge(int x, int y)
{
    int k = 1;
    int i, j, mm[Y][X];
    int n = 0;

    for (i = 0; i < Y; i++)
    {
        for(j = 0; j < X; j++)
        {
            mm[i][j] = 0;
        }
    }
    mm[x][y] = 1;

    if ((x-1) >= 0 && board[x-1][y] != 'X')
    {
        n = (up_1(mm, x, y, k));
        if (n == 1)
        {
            printf("\nhttp://www.hacker.org/coil/index.php?x=%d&y=%d&path=\n", y, x);
            return sum;
        }
    }

    if ((x+1) < Y && board[x+1][y] != 'X')
    {
        n = (down(mm, x, y, k));
        if (n == 1)
        {
            printf("\nhttp://www.hacker.org/coil/index.php?x=%d&y=%d&path=\n", y, x);
            return sum;
        }
    }

    if ((y-1) >= 0 && board[x][y-1] != 'X')
    {
        n = (left(mm, x, y, k));
        if (n == 1)
        {
            printf("\nhttp://www.hacker.org/coil/index.php?x=%d&y=%d&path=\n", y, x);
            return sum;
        }
    }

    if ((y+1) < X && board[x][y+1] == '.')
    {
        n = (right(mm, x, y, k));
        if (n == 1)
        {
            printf("\nhttp://www.hacker.org/coil/index.php?x=%d&y=%d&path=\n", y, x);
            return sum;
        }
    }

    return 0;
}


int main()
{
    const int Y = read_int("y.data");
    const int X = read_int("x.data");

    int board[Y][X];
    int k = 0;
    int i, j;
    char a[Y*X] = get_string();

    for (i = 0; i < Y; i++)
    {
        for (j = 0; j < X; j++)
        {
            board[i][j] = a[k];
            k++;
            if (board[i][j] == '.')
                ++sum;
        }
    }

    for (i = 0; i < Y; i++)
    {
        for (j = 0; j < X; j++)
        {
            // if (board[i][j] == 'X')
            //     continue;
            // k = judge(i, j);
            // if (k == sum)
            //     break;

            if (board[i][j] != 'X')
                k = judge(i, j);
            if (k == sum)
                break;
        }
        if (k == sum)
            break;
    }

    if (k == sum)
    {
        printf("%s\n", path);
        reverse(path);
        printf("%s\n", path);
    }
    else
        printf("\n没找到解\n");
}
