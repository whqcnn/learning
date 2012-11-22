#include <stdio.h>
#define H  9
#define L  10

int jisuan(int nn[][L], int x, int y)
{
    int i, j, n;
    int k = 0;
    int mm[H][L];
    for (i = 0; i < H; i++)
    {
        for (j = 0; j < L; j++)
        {
            mm[i][j] = 0;
        }
    }
    while (n != 15)
    {
        for (i = x; i < H && mm[i][y] != 1 && nn[i][y] != 'X' ; i++)
        {
            k++;
            mm[i][y] = 1;
        }
        for (i = x; i > 0 && mm[i][y] != 1 && nn[i][y] != 'X' ; i--)
        {
            k++;
            mm[i][y] = 1;
        }
        for (j = y; j < L && mm[x][j] != 1 && nn[x][j] != 'X' ; j++)
        {
            k++;
            mm[x][j] = 1;
        }
        for (j = y; j > 0 && mm[x][j] != 1 && nn[x][j] != 'X' ; j--)
        {
            k++;
            mm[x][j] = 1;
        }
        printf("%d ", k);
        if (n == k)
            break;
        else
            n = k;
    }
    printf("\n");

    return k;
}


int main()
{
    char a[H*L] = "...X.........X....X...X...X.X.....X........X...X.X...X.....X.........X.........X.........X";
    int k = 0;
    int m = 0;
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
            if (nn[i][j] == 'X')
            {
                k++;
            }
            printf("%c ", nn[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < H; i++)
    {
        for (j = 0; j < L; j++)
        {
            m = jisuan(nn, i, j);
            if (m == k)
            {
                break;
            }
        }
        if (m == k)
        {
            break;
        }
    }
    if (m == k)
        printf("%d %d\n", i, j);
    else
        printf("\n没有解\n");
}
