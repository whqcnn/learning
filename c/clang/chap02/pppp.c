#include <stdio.h>

void print_array(int a[], const int size)
{
    int i;
    for(i = 0; i < size; ++i)
        printf("%d  ", a[i]);
    printf("\n");
}

void bubble(int a[], const int size)
{
    int i, m;
    if (size <= 0)
        return;

    for (i = 0; i < size-1; ++i)
        if (a[i] > a[i+1])
        {
            m = a[i];
            a[i] = a[i+1];
            a[i+1] = m;
        }
    bubble(a, size-1);
}

int main()
{
    int a[] = {8,6,1,3,2,7,6,3,0,2,2,1,0,5,4,2,5,7,9,8};
    print_array(a, 20);
    bubble(a,20);
    print_array(a, 20);
}

