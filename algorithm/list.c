#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};


void append(struct Node **head, int n)
{
    struct Node *end = (struct Node *)malloc(sizeof(struct Node));
    end->data = n;
    end->next = NULL;
    if (*head == NULL)
    {
        *head = end;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = end;
}

void print_list(struct Node *head)
{
    struct Node *temp = head;
    if (head == NULL)
    {
        printf("(NULL)\n");
        return;
    }
    while (temp)
    {
        if (temp->next == NULL)
            printf("%d", temp->data);
        else
            printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct Node *head;
    head = NULL;
    print_list(head);
    append(&head, 3);
    print_list(head);
    append(&head, 5);
    append(&head, 2);
    print_list(head);
    for (int i = 0; i <= 5; ++i)
        append(&head, i);
    print_list(head);
    printf("%d\n", NULL == 0);
}
