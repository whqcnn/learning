#include <stdio.h>

void change(int m[], int n)
{
    int a, x, y;
    for (a = 0; a < (n / 2); a++){
        x = m[a];
        y = m[n - 1 - a];
        m[a] = y;
        m[n-1-a] =x;}
}

int main()
{
    int a, n[10];

    for (a = 0; a < 10; a++){
        n[a] = a;
        printf("%d ", n[a]);}
        change(n, 10);
    for (a = 0; a < 10; a++)
        printf("%d  ", n[a]);
    printf("\n");
}
