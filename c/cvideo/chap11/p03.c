#include <stdio.h>  /*将多个字符串按字母顺序输出*/
#include <string.h>

void sort(char *str[], int n)
{
    char *temp;
    int i, j, k;
    for (i = 0; i < n-1; i++)
    {
        k = 1;
        for (j = i + 1; j < n; j++)
            if (strcmp(str[k], str[j]) > 0)
                k = j;
            if (k != i)
            {
                temp = str[i];
                str[i] = str[k];
                str[k] = temp;
            }
    }
}

int main()
{
    int i, n = 4;
    char *string[4] = {"FORTRAN", "PASCAL", "BASIC", "C"};
    sort(string, n);
    for (i = 0; i < n; i++)
        printf("%s\n", string[i]);
}

