// 1,2,3,4输出这4个所有的排列顺序.

#include <stdio.h>

int main()
{
    int a, b, c, d;
    int n = 0;

    for (a = 1; a < 5; a++)
    {
        for (b = 1; b < 5; b++)
        {
            if (b != a)
            {
                for (c = 1; c < 5; c++)
                {
                    if (c != a && c != b)
                    {
                        for (d = 1; d < 5; d++)
                        {
                            if (d != a && d != b && d != c)
                            {
                                ++n;
                                printf("第%2d种: %d%d%d%d\n", n, a, b, c, d);
                            }
                        }
                    }
                }
            }
        }
    }
}
