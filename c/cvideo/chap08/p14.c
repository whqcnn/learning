#include <stdio.h>
#include <string.h>

char string_cut(char n[], char c)
{
    char m[100];
    int i;
    int k = 0;
    for (i = 0; n[i] != '\0'; i++)
    {
        if (n[i] != c){
            m[k] = n[i];
            k++;}
    }
    m[k] = '\0';
    printf("%s\n", m);
    return m;
}

int main()
{
    char n[20];
    char c = 'a';
    gets(n);
    string_cut(n, c);
    printf("%s\n", string_cut(n,c));
}
