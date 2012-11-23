// 打乱数组中字符的顺序.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

void shufflearray(char a[])          // 重新随机排列数组中的字符函数
{
    int i, n;
    char c;
    for (i = 0; i < SIZE; i++)
    {
        n = drand48() * SIZE;
        c = a[i];
        a[i] = a[n];
        a[n] = c;
    }
}
                                     // main主函数
int main()
{
    char a[SIZE];
    int  nn[SIZE][SIZE];

    srand48(time(0));
    int i, j, x, y;
    int n = 0;
    int k = 65;
    for (i = 0; i < SIZE; i++)
    {
        a[i] = k;
        k++;
    }
    for (i = 0; i < SIZE; i++)
    {
        for ( j = 0; j < SIZE; j++)
            nn[i][j] = 0;
    }

    printf("%s\n\n", a);
    for (i = 0; i < 1000; i++)
    {
        shufflearray(a);
        for (x = 65; x < 65+SIZE; x++)
        {
            for (y = 0; y < SIZE; y++)
            {
                if (a[y] == x)
                    nn[x-65][y]++;
            }
        }
    }

    printf("次数|");
    for (i = 1; i < SIZE+1; i++)
        printf("%3d ", i);
    printf("\n----+");
    for (i = 0; i < SIZE; i++)
        printf("----");
    printf("\n");

    for (i = 0; i < SIZE; i++)
    {
        printf(" %c  |", (65+i));
        for ( j = 0; j < SIZE; j++)
        {
            printf("%4d", nn[i][j]);
        }
        printf("\n");
    }
}

