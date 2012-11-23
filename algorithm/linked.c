#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

int main()
{
    Node *head, *tail;
    Node *current;

    head = tail = NULL;
    head = NULL;
    for (int i = 1; i <= 10; i++)
    {
        current = (Node *)malloc(sizeof(Node));
        current->data = i;
        if (head == NULL)
            head = current;
        else
            tail->next = current;
        tail = current;
    }
    current = head;
    while (current)
    {
        Node *tail;
        if (current->next == NULL)
            printf("%d\n", current->data);
        else
            printf("%d -> ", current->data);
        current = current->next;
    }
}
