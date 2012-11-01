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
    int i, j, m;

    for (i = 0; i < (size-1); ++i)
        for (j = (i+1); j < size; ++j)
            if (a[i] > a[j])
            {
                m = a[i];
                a[i] = a[j];
                a[j] = m;
            }
}

int main()
{
    int a[] = {8,6,1,3,2,7,6,3,0,2,2,1,0,5,4,2,5,7,9,8};
    print_array(a, 20);
    bubble(a,20);
    print_array(a, 20);
}
