#include <stdio.h>
#define H  9
#define L  10

int judge(int nn[][L], int x, int y)
{
    printf("%d%d", x, y);
    int i, j, _x, _y;
    int k = 1;
    int n = 1;
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
    while (k != 15)
    {
        if ((i+1) < H && mm[i+1][j] != 1 && nn[i+1][j] != 'X')
        {
            for (i = i+1; i < H && mm[i][j] != 1 && nn[i][j] != 'X' ; i++)
            {
                printf("<1>");
                k++;
                mm[i][j] = 1;
            }
            i--;
        }

        if ((i-1) >= 0 && mm[i-1][j] != 1 && nn[i-1][j] != 'X')
        {
            for (i = i-1; i >= 0 && mm[i][j] != 1 && nn[i][j] != 'X' ; i--)
            {
                printf("<2>");
                k++;
                mm[i][j] = 1;
            }
            i++;
        }

        if ((j+1) < L && mm[i][j+1] != 1 && nn[i][j+1] != 'X')
        {
            for (j = j+1; j < L && mm[i][j] != 1 && nn[i][j] != 'X' ; j++)
            {
                printf("<3>");
                k++;
                mm[i][j] = 1;
            }
            j--;
        }

        if ((j-1) >= 0 && mm[i][j-1] != 1 && nn[i][j-1] != 'X')
        {
            for (j = j-1; j >= 0 && mm[i][j] != 1 && nn[i][j] != 'X' ; j--)
            {
                printf("<4>");
                k++;
                mm[i][j] = 1;
            }
            j++;
        }
        if (n == k)
            break;
        else
            n = k;
    }

    printf("  *%d*\n\n", k);
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
                m = judge(nn, i, j);
            }
            if (m == k)
                break;
        }
        if (m == k)
            break;
    }
    m = judge(nn, 0, 0);
    if (m == k)
        printf("%d %d\n", i, j);
    else
        printf("\n没有解\n");
}
