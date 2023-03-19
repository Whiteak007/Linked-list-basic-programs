#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linklist_traversal(struct node *ptr)
{
    // ptr->next = NULL;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{

    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *secand = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *last = (struct node *)malloc(sizeof(struct node));

    
    first->data = 4;
    first->next = secand;

    secand->data = 14;
    secand->next = third;

    third->data = 114;
    third->next = last;

    last->data = 1114;
    last->next = NULL;

    linklist_traversal(first);
    return 0;
}