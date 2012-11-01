#include <stdio.h>

int prime(int k)
{
    int n = 2;
    for (n = 2; n * n <= k; n++)
    {
        if (k % n == 0)
            return 0;
    }
    return k;
}

int main()
{
    int n;
    int m = 1;

    FILE *fp = fopen("primers.txt", "a");
    for (n = 3; n < 10000; n += 2)
        if (prime(n))
            m++;
    fprintf(fp, "\nTotal primers: %d\n", m);
    fclose(fp);
}
