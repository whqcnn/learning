#include <stdio.h>

int main()
{
    int i, j, a[2][3], b[2][3];

    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            a[i][j] = i;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            b[i][j] = j;

    printf("array a:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }
    printf("array b:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%3d", b[i][j]);
        printf("\n");
    }
}
