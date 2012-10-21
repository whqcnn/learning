#include <stdio.h>

int main()
{
    int c;

    printf("摄氏温度与华氏温度转换：\n");
    printf("摄氏:  华氏:\n");
    for (c = 0; c <= 100; c += 5)
        printf("%-5d  %d\n", c, (9*c/5 +32));
}
