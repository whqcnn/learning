#include <stdio.h>
#include <string.h>

int main()
{
    char n1[20] = "hello!";
    char n2[20] = "ruler!";

    strcpy(n1, n2);
    printf("%s\n%s\n", n1, n2);
}

