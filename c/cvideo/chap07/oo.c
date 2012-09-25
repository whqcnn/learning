#include <stdio.h>

int nn()
{
    printf("█ ");
}

int main()
{
    int x, y, i, n[10][10];

    for (x = 0; x < 10; x++){
        for(y = 0; y < 10; y++){
            n[x][y] = 11;
            printf("%d ", n[x][y]);}
        printf("\n");}
    for (x = 0; x < 10; x++){
        for(y = 0; y < 10; y++)
            nn();
        printf("\n");}
}
