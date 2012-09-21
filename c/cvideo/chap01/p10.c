#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    printf("华氏温度%d度，为摄氏温度的%d度。\n", n, 5 * (n - 32) / 8);
}

