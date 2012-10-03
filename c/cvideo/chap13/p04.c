#include <stdio.h>  //链表的创建和打印
#include <stdlib.h>

struct stu
{
    int no;
    char name[10];
    int results;
    struct stu *next;
};

struct stu *create()
{
    char a;
    struct stu *head, *tail, *new;
    head = NULL;
    tail = NULL;
    do{
    new = (struct stu *)malloc(sizeof(struct stu));
    printf("请输入新同学学号:");
    scanf("%d", &new->no);
    printf("请输入新同学的名字:");
    scanf("%s", new->name);
    printf("请输入新同学的成绩:");
    scanf("%d", &new->results);
    printf("是否还有学生(y/n):\n");
    scanf("%c", &a);
    new->next = NULL;

    if (head == NULL && tail == NULL)
    {
        head = new;
        tail = new;
    }
    else
    {
        tail->next = new;
        tail = new;
    }
    scanf("%c", &a);
    }while(a == 'y');
    return head;
}

void dayin(struct stu *head)
{
    struct stu *cur;
    int i = 1;
    cur = head;
    if (head == NULL)
        return;
    do{
    printf("第%d个人的信息：\n", i);
    printf("学号:%d\n", cur->no);
    printf("姓名:%s\n", cur->name);
    printf("分数:%d\n\n", cur->results);
    i++;
    cur = cur->next;
    }while(cur != NULL);
}


int main()
{
    struct stu *s =NULL;
    s = create();
    dayin(s);
}
