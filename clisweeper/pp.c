#include <stdio.h>

int main()
{
    int a, b, c;
    a = b = c = 0;
    for (a = 0; a < 10; a++)
        if (a == 5){
            if (b != 0)
                b = b + 3;
            if (c != 3)
                c = c +1; }
    printf("%d %d %d\n", a, b, c);
}
