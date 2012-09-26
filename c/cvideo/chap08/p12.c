#include <stdio.h>
#include <string.h>

int search(char list[][20], char name[], int m)
{
    int i;
    for (i = 0; i < m; i++)
        if (strcmp(list[i], name) == 0)
            break;
        printf("***%d\n", i);
        return i;
}

int main()
{
    char month_list[12][20] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    char month[20];
    int n;
    gets(month);
    n = search(month_list, month, 12);
    if (n < 12)
        printf("%s表示%d月\n", month, n+1);
    else
        printf("查无此单词\n");
}
