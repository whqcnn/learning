#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, p, x1, x2;
    printf("求axx + bx + c = 0方程的解.输入：a b c的值\n");
    scanf("%f%f%f", &a, &b, &c);
    p = b * b - 4 * a * c;

    if (p > 0)
    {
        x1 = (-b + sqrt(p)) / (2 * a);
        x2 = (-b - sqrt(p)) / (2 * a);

    printf("解为：%1.1f和 %1.1f\n", x1, x2);
    }
    else
        printf("无实数解\n");
}
