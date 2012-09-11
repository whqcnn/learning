#include <stdio.h>

int numb (int k);

int main()
{
    int n, m;

    n=3;
    while (n <10000){
        if (numb (n) == n){
            m = m +n;
            n++;}
        else if (numb (n) == -1)
            n++;
    }
    printf("%d\n", (m+2));
}

int numb (int k)
{
    int n;

    n = 2;
    while (n < (k - 1)) {
        if (k%n == 0)
            return -1;
        else if (k%n != 0)
            n++;
    }
    return k;
}
