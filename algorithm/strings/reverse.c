#include <stdio.h>


void reverse(char s[])
{
    char c;
    int i, j;
    for (i = 0; s[i] != '\0'; i++)
        ;
    j = --i;
    for (i = 0; i <= j/2; i++)
    {
        c = s[i];
        s[i] = s[j-i];
        s[j-i] = c;
    }
}

int main()
{
    char s1[] = "abcdefg";
    reverse(s1);
    printf("%s\n", s1); // output: gfedcba

    char s2[] = "Hello Wrold";
    reverse(s2);
    printf("%s\n", s2); // dlorW olleH
}

