#include <stdio.h>

int main()
{
    char str1[6], str2[10];
    int i;

    for (i = 0; i < 5; i++)
        scanf("%c", &str1[i]);
    str1[5] = '\0';
    scanf("%s", str2);
    printf("%s\n%s\n", str1, str2);
}

