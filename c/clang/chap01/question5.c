#include <stdio.h>

int main()
{
    int fahr;

    printf("华氏温度与摄氏温度转换：\n\n");
    printf("华氏温度\t摄氏温度\n");
    for (fahr = 300; fahr >= 0; fahr -= 20)
        printf("%-8d\t%d\n", fahr, (5*(fahr-32)/9));
}

