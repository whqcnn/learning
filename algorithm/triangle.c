//有一个边长和为1000的直角三角形，各边长度都为整数，求它有哪几种情况输出各边长度。

#include <stdio.h>

#define S 1000

int main()
{
    int a, b;   // a为短直角边，b为长的直角边.

    for (a = 1; a < S/3; a++)
    {
        for (b = (S-a)/2; b >= a; b--)
        {
            if ((a*a + b*b) == (S-a-b)*(S-a-b))
                printf("短直角边: %d 长直角边: %d 斜边: %d\n", a, b, (S-a-b));
        }
    }
}
