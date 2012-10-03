#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *q;
    struct node *head, *tail, *p;
    int x;
    printf("\n请输入一个整数:");
    scanf("%d", &x);
    while (x != 0)
    {
        p = (struct node *)malloc(sizeof(struct node));
        p ->data = x;
        p ->next = NULL;
        if (head == NULL)
            head = tail = p;
        else
        {
            tail ->next = p;
            tail = p;
        }
        printf("请输入一个整数:");
        scanf("%d", &x);
    }
    return (head);
}
