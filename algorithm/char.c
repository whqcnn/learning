#include <stdio.h>
#include <stdlib.h>

char *foo()
{
    char *s = (char *)malloc(20);
    s = "Hello Heap.";
    return s;
}

void bar(char **s)
{
    *s = foo();
    printf("bar: %s\n", *s); // Works fine just as expected.
}

int main()
{
    char *s;
    bar(&s);
    printf("%s\n", s); // Output some undefined content like `H?}?H??`, other than `Hello Heap.`
}

