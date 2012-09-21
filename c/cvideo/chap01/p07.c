#include <stdio.h>

float max(float x, float y)
{
    float z;

    if (x > y)
        z = x;
    else
        z = y;
    return z;
}

int main()
{
    float a, b, c;

    scanf("%f,%f", &a, &b);
    c = max(a, b);

    printf("%f,%f,the max is %f\n", a, b, c);
}

