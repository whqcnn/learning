#include <stdio.h>

int main()
{
    signed char a = 1;
    unsigned char b = 1;
    signed short c = 1;
    unsigned short d = 1;
    signed int e = 1;
    unsigned int f = 1;
    signed long g = 1;
    unsigned long h = 1;
    long int n, m;

    while (a <= 1)
    {
        n = a;
        a--;
    }
    while (a >= 1)
    {
        m = a;
        a++;
    }
    printf("signed char : %ld  ~   %ld\n", n, m);



    while (b <= 1)
    {
        n = b;
        b--;
    }
    while (b >= 1)
    {
        m = b;
        b++;
    }
    printf("unsigned char: %ld  ~   %ld\n", n, m);


    while (c <= 1)
    {
        n = c;
        c--;
    }
    while (c >= 1)
    {
        m = c;
        c++;
    }
    printf("signed short: %ld  ~   %ld\n", n, m);

    while (d <= 1)
    {
        n = d;
        d--;
    }
    while (d >= 1)
    {
        m = d;
        d++;
    }
    printf("unsigned short: %ld  ~   %ld\n", n, m);


    while (e <= 1)
    {
        n = e;
        e--;
    }
    while (e >= 1)
    {
        m = e;
        e++;
    }
    printf("signed int: %ld  ~   %ld\n", n, m);

    while (f <= 1)
    {
        n = f;
        f--;
    }
    while (f >= 1)
    {
        m = f;
        f++;
    }
    printf("unsigned int: %ld  ~   %ld\n", n, m);
}

