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
    int i = 0;
    int m = 1;
    FILE *fp = fopen("primers.txt", "w");

    fprintf(fp, "%d\n", 2);
    for (n = 3; n < 10000; n  = n + 2)
    {
        if (prime(n))
        {
                fprintf(fp, "%d ", n);
                m++;
                i++;
                if (i == 5)
                {
                    fprintf(fp, "\b\n");
                    i = 0;
                }
        }
    }
    fclose(fp);
}
