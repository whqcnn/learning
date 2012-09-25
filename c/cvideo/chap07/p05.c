#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {11, 4, 2, 7, 9};
    int c[5];
    int i;

    for (i = 0; i < 5; i++){
        c[i] = a[i] + b[i];
        printf("%d ", c[i]);}
    printf("\n");
}

