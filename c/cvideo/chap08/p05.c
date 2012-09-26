#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char str1[20];
    char str2[20];
    gets(str1);
    gets(str2);
    for (i = 0; str2[i] != '\0'; i++)
        printf("0");
    printf("%s : %d\n", str1, strlen(str1));
    printf("%s : %d\n", str2, i);
    printf("%s : %d\n", "I like you!", strlen("I like YOU!"));
}

