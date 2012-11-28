#include <stdio.h>

int main()
{
    int n = 7;
    int *p = &n;
    printf("*p = %d\n", *p);

    printf("p = %lld\n", p);

    printf("&p = %lld\n", &p);

    printf("%ld\n", sizeof(n));
    printf("%ld\n", sizeof(int));
    printf("%ld\n", sizeof(*p));
    printf("%ld\n", sizeof(p));
    printf("%ld\n", sizeof(long));
}
