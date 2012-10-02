#include <stdio.h>

int Num, Max, Min;

int average(int array[])
{
    int i, a = array[0];
    Max = Min = array[0];
    for (i = 1; i < Num; i++)
    {
        if (array[i] > Max)
            Max = array[i];
        if (array[i] < Min)
            Min = array[i];
        a += array[i];
    }
    a /= Num;
    return a;
}

int main()
{
    int aver;
    int n[5] = {23, 2, 4, 5, 6};
    Num = 5;
    aver = average(n);
    printf("max = %d, min = %d, aver = %d\n", Max, Min, aver);
}

