#include <stdio.h>

void string_copy(char s1[], char s2[])
{
    int i;
    for (i = 0; s2[i] != '\0'; i++)
        s1[i] = s2[i];
        s1[i] = '\0';
}

int main()
{
    char n1[20] = "student";
    char n2[20] = "teacher!";
    char n3[100];

    string_copy(n3, n1);
    string_copy(n1, n2);
    string_copy(n2, n3);

    printf("%s\n%s\n", n1, n2);
}

