#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, n, m, k;

    scanf("%f%f%f", &a, &b, &c);

    if (a + b > c && a + c > b && c + b > a)
    {
        n = (a + b + c) / 2;
        m = sqrt(n * (n - a) * (n - b) * (n - c));
    }
    k = sqrt(16);
    printf("%1.1f %f\n", m, k);
}
