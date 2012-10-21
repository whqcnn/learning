#include <stdio.h>

float celsius(float fahr)
{
    return (5 * (fahr - 32) / 9);
}

int main()
{
    float fahr;

    for (fahr = 0; fahr <= 300; fahr += 20)
        printf("%3.0f %6.1f\n", fahr, celsius(fahr));
}
