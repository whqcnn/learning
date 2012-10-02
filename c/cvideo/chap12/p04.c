#include <stdio.h>  /* 共用体试用 */

int main()
{
    union temp
    {
        char a;
        int b;
    }t;
    t.a = 66;
    t.b = 7;
    printf("%o:%d, %o:%d\n", &t.a, t.a, &t.b, t.b);
}
