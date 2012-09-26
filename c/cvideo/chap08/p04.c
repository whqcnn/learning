#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20], str2[20];
    char n[] = "123";
    gets(str1);
    scanf("%s", str2);
    if (strcmp(n, str1) == 0)
        printf("hello, world\n");
    printf("str1: %s\nstr2: %s\n", str1, str2);
}

